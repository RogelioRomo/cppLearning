#include <iostream>

using namespace std;

void swap(int *a, int *b) {
  int temp = *a; // temp=100
  *a = *b;       // a=200 (x=200)
  *b = temp;     // b=100 (y=100)
}

int main() {
  int x{100}, y{200};
  cout << "\nx: " << x << endl; // 100
  cout << "y: " << y << endl;   // 200

  swap(&x, &y); // we enter the address as an argument

  cout << "\nx: " << x << endl; // 200
  cout << "y: " << y << endl;   // 100

  cout << endl;
  return 0;
}
