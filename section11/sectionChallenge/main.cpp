#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_selection();
void handle_print(const vector<double> &list);
void handle_add_numbers(vector<double> &list);
void handle_mean(const vector<double> &list);
void handle_smallest(const vector<double> &list);
void handle_largest(const vector<double> &list);
void handle_clear(vector<double> &list);
void handle_quit();

int main() {
  char selection{};
  vector<double> list{};

  do {
    display_menu();
    selection = get_selection();
    switch (selection) {
    case 'P':
      handle_print(list);
      break;
    case 'A':
      handle_add_numbers(list);
      break;
    case 'M':
      handle_mean(list);
      break;
    case 'S':
      handle_smallest(list);
      break;
    case 'L':
      handle_largest(list);
      break;
    case 'C':
      handle_clear(list);
      break;
    case 'Q':
      handle_quit();
      break;
    default:
      cout << "Unkown selection, please try again...";
    }
  } while (selection != 'Q');

  cout << endl;
  return 0;
}

void display_menu() {
  cout << "\n-----------------------" << endl;
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display the mean of the numbers" << endl;
  cout << "S - Display the smallest of the numbers" << endl;
  cout << "L - Display the largest of the numbers" << endl;
  cout << "C - Clear list (erases all values in the list)" << endl;
  cout << "Q - Quit" << endl;
  cout << "-----------------------" << endl;
  cout << "\nEnter your selection: ";
}

char get_selection() {
  char selection{};
  cin >> selection;
  return toupper(selection);
}

void handle_print(const vector<double> &list) {
  if (list.size() == 0) {
    cout << "No integers found";
  } else {
    cout << "[ ";
    for (auto li : list) {
      cout << li << " ";
    }
    cout << "]";
  }
}

void handle_add_numbers(vector<double> &list) {
  double numberEntered{};
  cout << "Please enter an integer: ";
  cin >> numberEntered;
  if (numberEntered >= 0) {
    list.push_back(numberEntered);
  } else {
    cout << "Negative numbers are not allowed";
  }
}

void handle_mean(const vector<double> &list) {
  double meanCount{};
  if (list.size() == 0) {
    cout << "Unable to calculate - no data in list" << endl;
  } else {
    for (auto li : list)
      meanCount += li;

    double mean = meanCount / list.size();
    cout << "The mean of the lsit is: " << mean;
  }
}

void handle_smallest(const vector<double> &list) {
  double min = list.at(0);
  if (list.size() == 0) {
    cout << "Unable to calculate - no data in list" << endl;
  } else {
    for (auto newMin : list) {
      if (newMin < min)
        min = newMin;
    }
    cout << min << " is the smallest number" << endl;
  }
}

void handle_largest(const vector<double> &list) {
  double max = list.at(0);
  if (list.size() == 0) {
    cout << "Unable to calculate - no data in list" << endl;
  } else {
    for (auto newMax : list) {
      if (newMax < max)
        max = newMax;
    }
    cout << max << " is the largest number" << endl;
  }
}

void handle_clear(vector<double> &list) {
  list.clear();
  cout << "List cleared" << endl;
}

void handle_quit() { cout << "Goodbye!..." << endl; }
