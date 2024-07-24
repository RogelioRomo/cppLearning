#include <cstring>
#include <iostream>
#include "Mystring.h"

// no-args constructor
Mystring::Mystring() // expects nothing
    : str{nullptr}   // we init a pointer called 'str'on the stack
{
    str = new char[1]; // on the heap we allocate 1 char to str
    *str = '\0';       // we dereference the pointer and asign a null terminator
                       // in other words we create an empty string
}

// overloaded constructor
Mystring::Mystring(const char *s) // expects a c-style string
    : str{nullptr}
{
    if (s == nullptr) // is the string passed has nullptr then an empty string is created
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1]; // we check the length of the string
        // and we add 1 space to it for the null terminator, so that space will
        // be allocated to the heap for that string 'str
        std::strcpy(str, s); // we copy the string to that heap space (str)
        // so now, str = paramter string passed to the constructor
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) // called when we got an existing object and want to copy it to create
                                           // a new object
    : str{nullptr} // str is initialized to nullptr
{
    str = new char[std::strlen(source.str) + 1]; // we create on the heap a new space for str with the size
    // of the source length + 1 space for the null terminator
    std::strcpy(str, source.str); // we deep copy the string to that new heap space (str)
    // std::cout << "Copy constructor used" << std::endl;
}

// destructor
Mystring::~Mystring()
{
    delete[] str;
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