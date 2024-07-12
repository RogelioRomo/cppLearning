#include <iostream>

using namespace std;

int main() {
  int *int_ptr{nullptr};

  int_ptr = new int; // new storage for an unnamed 'integer' is going
                     // to be allocated on the heap, and its
                     // address will be stored in int_ptr

  cout << int_ptr << endl; // display memory location where this 'int'
                           // will be on the heap

  delete[] int_ptr; // we free the storage on the heap

  size_t size{0};
  double *temp_ptr{nullptr};

  cout << "How many temps? ";
  cin >> size;

  temp_ptr = new double[size]; // new storage for this amount 'size'
                               // of doubles
  cout << temp_ptr << endl; // will display the address of the
                            // FIRST element of the amount of doubles

  delete[] temp_ptr;

  cout << endl;
  return 0;
}
