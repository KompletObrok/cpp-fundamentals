#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    // Non-member operator overloads as friends
    friend Mystring operator-(const Mystring &obj);                     // lowercase
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);

private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    // These still need to be members (they modify *this)
    Mystring &operator++();          // pre-increment (uppercase)
    Mystring operator++(int);        // post-increment (uppercase)
    Mystring &operator+=(const Mystring &rhs);
    Mystring &operator*=(int n);

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
