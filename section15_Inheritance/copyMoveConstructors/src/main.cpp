#include <iostream>

class Base {
private:
  int value;

public:
  Base() : value{0} { std::cout << "Base no-args constructor" << std::endl; }
  Base(int x) : value{x} {
    std::cout << "Base (int) overloaded constructor" << std::endl;
  }
  Base(const Base &other) : value{other.value} {
    std::cout << "Base copy constructor" << std::endl;
  }
  Base &operator=(const Base &rhs) {
    std::cout << "Base operator=" << std::endl;
    if (this == &rhs)
      return *this;
    value = rhs.value;
    return *this;
  }
  ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base {
  // using Base::Base; //not really recommended
private:
  int doubled_value;

public:
  Derived() : Base{} { std::cout << "Derived no-args constructor" << std::endl; }
  Derived(int x) : Base{x}, doubled_value{x * 2} {
    std::cout << "Derived (int) overloaded constructor" << std::endl;
  }
  Derived(const Derived &other)
      : Base(other), doubled_value{other.doubled_value} {
    std::cout << "Derived copy constructor" << std::endl;
  }
  Derived &operator=(const Derived &rhs) {
    std::cout << "Derived operator=" << std::endl;
    if (this == &rhs)
      return *this;
    Base::operator=(rhs);
    doubled_value = rhs.doubled_value;
    return *this;
  }
  ~Derived() { std::cout << "Derived destructor" << std::endl; }
};

int main() {
  Base b{100}; // overloaded constructor
  Base b1{b};  // copy constructor
  b = b1;      // copy assignment

  // Derived d{100}; //overloaded constructor
  // Derived d1{d};   //copy constructor
  // d = d1;          //copy assignment

  return 0;
}
