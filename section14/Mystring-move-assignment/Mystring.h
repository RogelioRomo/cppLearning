#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
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

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // !_MYSTRING_H_
