#include <iostream>
#include <cstring>
#include <cctype>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str) {
        source.str = nullptr;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// ============================================================
// Non-member (friend) operator overloads
// ============================================================

// Unary minus - returns lowercase version
Mystring operator-(const Mystring &obj) {
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);
    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Inequality
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return !(lhs == rhs);
}

// Less than
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

// Greater than
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// Repeat
Mystring operator*(const Mystring &lhs, int n) {
    size_t len = strlen(lhs.str);
    char *buff = new char[len * n + 1];
    buff[0] = '\0';
    for (int i = 0; i < n; i++)
        strcat(buff, lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// ============================================================
// Member operators (must be members - they modify *this)
// ============================================================

// Pre-increment - make uppercase, return reference
Mystring &Mystring::operator++() {
    for (size_t i = 0; i < strlen(str); i++)
        str[i] = std::toupper(str[i]);
    return *this;
}

// Post-increment - make uppercase, return old value
Mystring Mystring::operator++(int) {
    Mystring temp(*this);
    operator++();
    return temp;
}

// Concatenate and assign (uses non-member operator+)
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;
    return *this;
}

// Repeat and assign (uses non-member operator*)
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}
