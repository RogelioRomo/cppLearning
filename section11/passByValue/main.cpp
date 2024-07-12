#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(const vector<string> v); // const

void pass_by_value1(int num) { // formal parameters
  num = 1000;                  // we change the copy of 'num' locally
}

void pass_by_value2(string s) { s = "Changed!"; }

void pass_by_value3(vector<string> v) {
  v.clear(); // delete all vector elements
}

void print_vector(const vector<string> v) {
  for (auto s : v)
    cout << s << " ";
  cout << endl;
}

int main() {
  int num{10};
  int another_num{20};

  cout << "num before calling pass_by_value1: " << num << endl; // num is 10
  pass_by_value1(num);
  cout << "num after calling pass_by_value1: " << num
       << endl; // num is still 10 because it only change locally in
                // pass_by_value1

  cout << "\nanother_num before calling pass_by_value1: " << another_num
       << endl;
  pass_by_value1(another_num);
  cout << "another_num after calling pass_by_value1: " << another_num << endl;

  string name{"Frank"};
  cout << "\nname before calling pass_by_value2: " << name << endl;
  pass_by_value2(name);
  cout << "num after calling pass_by_value2: " << name << endl;

  vector<string> stooges{"Larry", "Moe", "Curly"};
  cout << "\nstooges before calling pass_by_value3: ";
  print_vector(stooges);
  pass_by_value3(stooges);
  cout << "stooges after calling pass_by_value3: ";
  print_vector(stooges);

  cout << endl;
  return 0;
}
