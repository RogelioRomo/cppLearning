#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vector1;
  vector<int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);
  cout << "\nThese are the values of vector 1: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  cout << "The size of vector 1 is: " << vector1.size() << endl;

  vector2.push_back(100);
  vector2.push_back(200);
  cout << "\nThese are the values of vector 2: " << endl;
  cout << vector2.at(0) << endl;
  cout << vector2.at(1) << endl;
  cout << "The size of vector 2 is: " << vector2.size() << endl;

  vector<vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  cout << "These are the vector_2d elements: " << endl;
  cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

  /*This doesn't actually changes the value in vector_2d, but it does change the
   * value in vector1. The reason for this is because when you add elements
   * already declared like a variable of vector in this case; the vector makes a
   * copy of the values*/

  vector1.at(0) = 1000;

  cout << "These are the new vector_2d elements: " << endl;
  cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

  cout << "These are the new velues of vector 1: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;

  return 0;
}
