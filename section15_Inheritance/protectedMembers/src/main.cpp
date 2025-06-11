#include <iostream>

class Base {
  // Note friends of Base have access to all
public:
  int a{0};
  void display() {
    std::cout << a << ", " << b << ", " << c << std::endl;
  }

protected:
  int b{0};

private:
  int c{0};
};

class Derived : public Base {
  // Note friends of Derived have access to only what Derived has access to

  // a will be public
  // b will be protected
  // c will not be accessible
public:
  void access_base_members() {
    a = 100; // OK
    b = 100; // OK
    // c = 300; //not accessible
  }
};

int main() {
  std::cout << "======Base member access from base objects=====" << std::endl;
  Base base;
  base.a = 100; // OK
  // base.b = 200; //Compiler error. is protected
  // base.c = 300; //Compiler error. is private

  std::cout << "=====Base member access from base objects=====" << std::endl;
  Derived d;
  d.a = 100; // OK
  // d.b = 200; //Compiler error. is protected
  // d.c = 300; //Compiler error. is private

  return 0;
}
