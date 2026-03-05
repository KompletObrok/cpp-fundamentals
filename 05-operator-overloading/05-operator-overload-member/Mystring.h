#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring(Mystring &&source);                           // Move constructor
    ~Mystring();                                                     // Destructor

    Mystring &operator=(const Mystring &rhs);       // Copy assignment
    Mystring &operator=(Mystring &&rhs);             // Move assignment

    // Unary operators
    Mystring operator-() const;                              // lowercase
    Mystring &operator++();                                  // pre-increment (uppercase)
    Mystring operator++(int);                                // post-increment (uppercase)

    // Binary operators
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;

    Mystring operator+(const Mystring &rhs) const;   // concatenation
    Mystring &operator+=(const Mystring &rhs);        // concat and assign

    Mystring operator*(int n) const;                          // repeat
    Mystring &operator*=(int n);                               // repeat and assign

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
