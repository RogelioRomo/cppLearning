#include <iostream>
#include <vector>

using namespace std;

vector<int> vec{10, 20, 30, 40, -99};

int main() {
  int count{};
  int i{};
  while (i < vec.size() && vec.at(i) != -99) {
    ++count;
    ++i;
  }
  cout << "Count: " << count << endl;
  cout << endl;
  return 0;
}
