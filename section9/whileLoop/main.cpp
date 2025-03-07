#include <iostream>

using namespace std;

int main() {
  // normal example
  // int i{1};

  // while(i <= 10) {
  //   if(i % 2 == 0)
  //     cout << i << endl;
  //   ++i;
  // }

  // input validation
  // int number{};
  // cout << "Enter an integer less than 100: ";
  // cin >> number;

  // while(number >= 100) {
  //   cout << "Enter an integer less than 100: ";
  //   cin >> number;
  // }
  // cout << "Thanks!" << endl;

  // count down
  // int num{};
  // cout << "Enter a positive integer - start the countdown: ";
  // cin >> num;

  // while(num > 0) {
  //   cout << num << endl;
  //   --num;
  // }
  // cout << "Blastoff!" << endl;

  // count up
  // int num{};
  // cout << "Enter a positive integer to count up to: ";
  // cin >> num;

  // int i{1};
  // while(num >= i) {
  //   cout << i << endl;
  //   i++
  // }

  bool done{false};
  int number{0};

  while (!done) {
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;
    if (number <= 1 || number >= 5)
      cout << "Out of range, try again" << endl;
    else {
      cout << "Thanks!" << endl;
      done = true; // this ends the loop, super important
    }
  }

  cout << endl;
  return 0;
}
