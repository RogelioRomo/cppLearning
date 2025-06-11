#include <iostream>

using namespace std;

int main() {
  // normal switch example
  // char letter_grade{};
  // cout << "Enter the letter grade you expect on the exam: ";
  // cin >> letter_grade;

  // switch(letter_grade) {
  //   case 'a':
  //   case 'A':
  //     cout << "You need a 90 or above, study hard!" << endl;
  //     break;
  //   case 'b':
  //   case 'B':
  //     cout << "Your need 80-89 for a B, study hard!" << endl;
  //     break;
  //   case 'c':
  //   case 'C':
  //     cout << "Your need 70-79 for an average grade" << endl;
  //     break;
  //   case 'd':
  //   case 'D':
  //     cout << "You should strive for a better grade. You need 60-69" << endl;
  //     break;
  //   case 'f':
  //   case 'F':
  //   {
  //     char confirm{};
  //     cout << "Are you sure(Y/N)?";
  //     cin >> confirm;
  //     if(confirm == 'y' || confirm == 'Y')
  //       cout << "OK, I guess you didn't study..." << endl;
  //     else if (confirm == 'n' || confirm == 'N')
  //       cout << "Good go study!" << endl;
  //     else
  //       cout << "Illegal choice" << endl;
  //     break;
  //   }
  //   default:
  //     cout << "Sorry thats not a valid grade" << endl;
  //     break;
  // }

  // example with enumeration
  enum Direction { left, right, up, down };

  Direction heading{left};

  // in this case is important to note that if we dont declare
  // the default statement then we can get warning for not using all the
  // values of our enum type (Direction in this case). We need to use all
  // of them or like this example, state a default. Remember type sensitive
  switch (heading) {
  case left:
    cout << "Going left" << endl;
    break;
  case right:
    cout << "Going right" << endl;
    break;
  default:
    cout << "OK" << endl;
    break;
  }

  return 0;
}
