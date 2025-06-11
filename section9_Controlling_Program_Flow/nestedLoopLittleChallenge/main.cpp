#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{2, 4, 6, 8};
  int result{};

  if (vec.size() > 1) {
    for (int i{}; i < vec.size(); ++i) {
      for (int j = i + 1; j < vec.size(); ++j) {
        // int total{};
        result += vec.at(i) * vec.at(j);
        // cout << total << endl;
      }
    }
  } else {
    result = 0;
  }

  cout << result << endl;

  cout << endl;
  return 0;
}
