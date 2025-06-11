#include <cstring>
#include <iostream>
#include <cctype>
#include "Mystring.h"

// no-args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    // std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    // std::cout << "Move constructor used" << std::endl;
}

// destructor
Mystring::~Mystring()
{
    delete[] str;
}

// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    // std::cout << "Copeassignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] this->str; //[] is because we are deleting an array
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    // std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char *Mystring::get_str() const { return str; }

//------------------------------------------------------------
// to lowercase
Mystring Mystring::operator-() const
{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// concatenate and assign
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs;
    return *this;
}

// make uppercase (pre-increment)
Mystring &Mystring::operator++()
{
    for (size_t i = 0; i < std::strlen(str); ++i)
        str[i] = std::toupper(str[i]);
    return *this;
}

// make uppercase (post-increment)
Mystring Mystring::operator++(int)
{
    Mystring temp{str};
    ++str; // make sure you call the preincrement
    return temp;
}

// repeat
Mystring Mystring::operator*(int n) const
{
    Mystring temp;
    for (int i = 1; i <= n; ++i)
        temp = temp + *this;
    return temp;
}

// repeat an assign
Mystring &Mystring::operator*=(int n)
{
    *this = *this * n;
    return *this;
}

// equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0);
}

// not equal
bool Mystring::operator!=(const Mystring &rhs) const
{
    return !(std::strcmp(str, rhs.str) == 0);
}

// freater than
bool Mystring::operator>(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) > 0);
}

// less than
bool Mystring::operator<(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) < 0);
}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}