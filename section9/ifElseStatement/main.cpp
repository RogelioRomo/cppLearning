#include <iostream>

using namespace std;

int main() {
  // int score{};

  // cout << "Enter score to evaluate: ";
  // cin >> score;

  // remember that if the value corresponds to an statement
  // the following ones will not be computed, C++ correclty assumes there's no
  // point if(score > 90)
  //   cout << "A";
  // else if(score > 80)
  //   cout << "B";
  // else if(score > 70)
  //   cout << "C";
  // else if(score > 60)
  //   cout << "D";
  // else
  //   cout << "F"

  // cout << "\nDone" << endl;

  int num{};
  const int target{10};

  cout << "Enter a number and I'll compare it to " << target << ": ";
  cin >> num;

  if (num >= target) {
    cout << "\n============================" << endl;
    cout << num << " is greater than or equal to  " << target << endl;
    int diff{num - target};
    cout << num << " is " << diff << " greater  than " << target << endl;
  } else {
    cout << "\n============================" << endl;
    cout << num << " is less than " << target << endl;
    int diff{target - num};
    cout << num << " is " << diff << " less than " << target << endl;
  }

  cout << endl;
  return 0;
}
