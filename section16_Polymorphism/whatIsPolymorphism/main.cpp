#include <iostream>
#include <memory>

class Base {
public:
  void say_hello() const {
    std::cout << "Hello - I'm a Base class object" << std::endl;
  }
};

class Derived : public Base {
public:
  void say_hello() const {
    std::cout << "Hello - I'm a Derived class object" << std::endl;
  }
};

// a function that accepts a Base object parameter ( it can be Derived or Base since both are a Base obj)
void greetings(const Base &obj) {
  std::cout << "Greetings";
  obj.say_hello();
}

int main() {
  // the next is still static binding
  Base b;        // this will call Base class
  b.say_hello(); // this will call say_hello method from Base class

  Derived d;     // this will call Derived class
  d.say_hello(); // this will call say_hello method from Derived class

  greetings(b); // this will call Base class method say_hello
  greetings(d); // this will also call Base class method say_hello (not Derived because of static binding)

  Base *ptr = new Derived(); // we can do this because Derived is a Base object
  ptr->say_hello();          // this will call Base method say_hello instead of the derived method
                             // because the pointer is ponting to a Base

  // smart pointers
  std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
  ptr1->say_hello();

  delete ptr;

  return 0;
}
