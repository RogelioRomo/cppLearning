#include <iostream>

using namespace std;

void func2(int &x, int y, int z) { // we push func2 into the stack
  x += y + z;                      // init x=30 y=10 z=20 / end x=60
  // when func2 ends, it gets pop from the stack
}

int func1(int a, int b) {
  int result{};
  result = a + b;      // a=10 b=20 thus result=30
  func2(result, a, b); // init result=30 a=10 b=20
  return result;       // end result=60
  // when func1 ends, it gets pop from the stack
}

int main() { // we push main into the stack
  int x{10};
  int y{20};
  int z{};
  z = func1(x, y);   // init x=10 y=20 / end z=60
  cout << z << endl; // z=60
  return 0;
}

// What typically happens when main calls func1 (or any functions calls
// another)? There are other ways to achieve the same result
//
// main:
//   push space for the return value
//   push space for the parameters
//   push the return address
//   transfer control to func1 (jmp)
//
// func1:
//   push the address of the previous activation record
//   push any register values that will need to be restores before returning to
//   the caller perform the conde in func1 restore the register values restore
//   the previous activation record (move the stack pointer) store any function
//   result transfer control to the return address (jmp)
