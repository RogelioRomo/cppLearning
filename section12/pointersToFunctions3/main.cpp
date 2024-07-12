#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v) {
  for (auto str : *v) // dereference V to access the data
    cout << str << " ";
  cout << endl;
  //(*v).at(0) = "Funny"
  // v = nullptr;
}

void display(int *array, int sentinel) {
  while (*array != sentinel) { // dereference array to acces to data
    cout << *array << " ";
    array++; // go to the next memory location 4bytes ahead (the next index of
             // the array in this case)
  }
}

int main() {

  cout << "------------------------------" << endl;
  vector<string> stooges{"Larry", "Moe", "Curly"};
  display(&stooges);

  cout << "\n----------------------------" << endl;
  int scores[]{100, 98, 97, 79, 85, -1};
  display(scores, -1);

  cout << endl;
  return 0;
}
