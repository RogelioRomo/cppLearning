#include <iostream>
#include <string>

using namespace std;

int main() {
  string text{};

  cout << "Enter your text: ";
  getline(cin, text);

  int totalRows = text.length();

  for (int row = 1; row <= totalRows; ++row) {
    for (int i = 0; i < totalRows - row; ++i) {
      cout << " ";
    }

    for (int i = 0; i < row; ++i) {
      cout << text.at(i);
    }

    for (int i = row - 2; i >= 0; --i) {
      cout << text.at(i);
    }
    cout << endl;
  }
  return 0;
}
