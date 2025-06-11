#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<char> vec{'l', 'm', 'e'};
  bool vowelFound{false};
  int i{};

  if (!vec.empty()) {
    do {
      if (vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' ||
          vec.at(i) == 'o' || vec.at(i) == 'u') {
        vowelFound = true;
      } else {
        i++;
      }
    } while (!vowelFound && i < vec.size());
  }

  if (vowelFound)
    cout << "Vowel found: " << vec.at(i);
  else
    cout << "No vowel was found";

  cout << endl;
  return 0;
}
