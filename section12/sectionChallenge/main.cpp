#include <iostream>

using namespace std;

void print(int *arr, int size);
int *apply_all(int *arr1, int size1, int *arr2, int size2);

int main() {
  const int size1{5};
  const int size2{3};

  int array1[]{1, 2, 3, 4, 5};
  int array2[]{10, 20, 30};

  cout << "Array 1: ";
  print(array1, size1);

  cout << "\nArray 2: ";
  print(array2, size1);

  int *result = apply_all(array1, size1, array2, size2);
  cout << "\nResult: ";
  const int result_size{size1 * size2};
  print(result, result_size);

  delete[] result;

  return 0;
}

void print(int *arr, int size) {
  cout << "[ ";
  for (int i = 0; i < size; ++i) {
    cout << *(arr + i) << " ";
  }
  cout << "]";
}

int *apply_all(int *arr1, int size1, int *arr2, int size2) {
  int *new_array{nullptr};
  new_array = new int[size1 * size2];
  int position{0};

  for (int i = 0; i < size2; ++i) {
    for (int j = 0; j < size1; ++j) {
      new_array[position] = arr1[j] * arr2[i];
      ++position;
    }
  }
  return new_array;
}
