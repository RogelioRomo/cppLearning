#include <iostream>

using namespace std;

void local_example(int x);
void global_example();
void static_local_example();

int num{300}; // global variable - declared outside any class or function

void local_example(int x) {
  int num{100}; // local to local_example, gets reset every time we call the
                // function
  cout << "\nLocal num is: " << num << " in local_example - start" << endl;
  num = x;
  cout << "Local num is: " << num << " in local_example - end" << endl;
  // num1 in main is not within scope - so it can't be used here
}

void global_example() {
  cout << "\nGlobal num is: " << num << " is global_example - start" << endl;
  num *= 2;
  cout << "Global num is: " << num << " in global_example - end" << endl;
}

void static_local_example() {
  static int num{5000}; // local to static_local_example static - retains its
                        // value between calls
  cout << "\nLocal static num is: " << num << " in static_local_example - start"
       << endl;
  num += 1000;
  cout << "Local static num is: " << num
       << " in static_local_example - end: " << endl;
}

int main() {
  int num{100};  // local to main
  int num1{500}; // local to main

  cout << "Local num is: " << num << " in main" << endl; // 100

  {
    int num{200}; // local to this inner block
    cout << "Local num is: " << num << " in inner block in main" << endl; // 200
    cout << "Inner block in main can see out - num1 is: " << num1 << endl; // 500
  }

  cout << "Local num is: " << num << " in main" << endl; // 100

  local_example(10);
  local_example(20);

  global_example(); // 300 600
  global_example(); // 600 1200

  static_local_example(); // 5000 6000
  static_local_example(); // 6000 7000
  static_local_example(); // 7000 8000

  return 0;
}
