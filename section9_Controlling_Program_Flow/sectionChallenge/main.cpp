#include <iostream>
#include <vector>

using namespace std;

int main() {
  char selection{};
  vector<double> list{};

  do {
    cout << "\n-------------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Clear list (erase all values in the list)" << endl;
    cout << "Q - Quit" << endl;
    cout << "----------------------" << endl;
    cout << "\nEnter your selection: ";
    cin >> selection;

    if (selection == 'P' || selection == 'p') {
      if (list.size() == 0)
        cout << "No integers found";
      else {
        cout << "[ ";
        for (auto li : list)
          cout << li << " ";
        cout << "]";
      }
    } else if (selection == 'A' || selection == 'a') {
      double numberEntered{};
      cout << "Please enter an integer: ";
      cin >> numberEntered;
      if (numberEntered >= 0)
        list.push_back(numberEntered);
      else
        cout << "Negative numbers are not allowed";
    } else if (selection == 'M' || selection == 'm') {
      double meanCount{};
      if (list.size() == 0)
        cout << "Unable to calculate - no data in list" << endl;
      else {
        for (auto li : list)
          meanCount += li;
        double mean = meanCount / list.size();
        cout << "The mean of the list is: " << mean;
      }
    } else if (selection == 'S' || selection == 's') {
      double min = list.at(0);
      if (list.size() == 0)
        cout << "Unable to calculate - no data in list" << endl;
      else {
        for (auto newMin : list) {
          if (newMin < min)
            min = newMin;
        }
        cout << min << " is the smallest number" << endl;
      }
    } else if (selection == 'L' || selection == 'l') {
      double max = list.at(0);
      if (list.size() == 0)
        cout << "Unable to calculate - no data in list" << endl;
      else {
        for (auto newMax : list) {
          if (newMax < max)
            max = newMax;
        }
        cout << max << " is the largest number" << endl;
      }
    } else if (selection == 'C' || selection == 'c') {
      list.clear();
      cout << "List cleared" << endl;
    } else if (selection == 'Q' || selection == 'q') {
      cout << "Goodbye!";
    } else {
      cout << "Unkown selection, please try again..." << endl;
    }

  } while (selection != 'q' && selection != 'Q');

  cout << endl;
  return 0;
}
