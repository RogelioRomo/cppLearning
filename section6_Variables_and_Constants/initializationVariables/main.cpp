#include <iostream>

using namespace std;

int main() {
  cout << "Enter the width of the room: ";
  int room_width{0};
  cin >> room_width;

  cout << "Enter the width of the room: ";
  int room_length{0};
  cin >> room_length;

  cout << "The area of the room is: " << room_width * room_length
       << " square feet" << endl;

  return 0;
}

// Type of initialization
//
// int age;       //uninitialized
// int age = 21;  //C-like initialization
// int age(21);   //Constructor initialization
// int age{21};   //C++11 list initialization syntax (recommended)
//
// Storage locations in memory are represented by variables
