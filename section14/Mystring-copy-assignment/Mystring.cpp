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

// display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char *Mystring::get_str() const { return str; }
