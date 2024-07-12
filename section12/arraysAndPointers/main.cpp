#include <iostream>

using namespace std;

int main() {
  int scores[]{100, 95, 89};
  cout << "Value of scores: " << scores << endl;

  int *score_ptr{
      scores}; // we assing the address of the first element of the array
  cout << "Value of score_ptr: " << score_ptr << endl;

  cout << "\nArray subscript notation --------------------------------" << endl;
  cout << scores[0] << endl; // 100 (value of address + 0bytes)
  cout << scores[1] << endl; // 95 (value of address + 4bytes)
  cout << scores[2] << endl; // 89 (value of address + 8bytes)

  cout << "\nPointer subscript notation --------------------------------"
       << endl;
  cout << score_ptr[0] << endl; // 100 (value of address + 0bytes)
  cout << score_ptr[1] << endl; // 95 (value of address + 4bytes)
  cout << score_ptr[2] << endl; // 89 (value of address + 8bytes)

  cout << "\nPointer offset notation --------------------------------" << endl;
  cout << *score_ptr << endl;       // 100
  cout << *(score_ptr + 1) << endl; // 95 *(score_ptr + 1 = address + 4bytes)
  cout << *(score_ptr + 2) << endl; // 89 *(score_ptr + 2 = address + 8bytes)

  cout << "\nArray offset notation --------------------------------" << endl;
  cout << *scores << endl;       // 100
  cout << *(scores + 1) << endl; // 95 *(scores + 1 = address + 4bytes)
  cout << *(scores + 2) << endl; // 89 *(scores + 2 = address + 8bytes)

  cout << endl;
  return 0;
}
