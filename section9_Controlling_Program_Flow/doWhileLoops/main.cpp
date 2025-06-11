#include <iostream>

using namespace std;

int main() {
  char selection{};
  do {
    cout << "\n--------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do something else" << endl;
    cout << "Q. Quit" << endl;
    cout << "----------------------" << endl;
    cout << "\nEnter your selection: ";
    cin >> selection;
    
    if(selection == '1')
      cout << "You typed 1 - doing this" << endl;
    else if(selection == '2')
        cout << "You typed 2 - doing that" << endl;
    else if(selection == '3')
        cout << "You typed 3 - doing something else" << endl;
    else if(selection == 'Q')
        cout << "Unknown option, try again..." << endl;
  } while (selection != 'q' && selection != 'Q');

  cout << endl;
  return 0;
}
