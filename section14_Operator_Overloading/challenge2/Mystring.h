#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, const Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // no-args constructor
    Mystring(const char *s);          // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs);      // move assignment

    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    Mystring &operator+=(const Mystring &rhs);
    Mystring &operator++();
    Mystring operator++(int);
    Mystring operator*(int n) const;
    Mystring &operator*=(int n);
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // !_MYSTRING_H_
