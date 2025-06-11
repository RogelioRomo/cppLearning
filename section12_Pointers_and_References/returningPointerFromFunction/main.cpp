#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
  int *new_storage{nullptr};
  new_storage = new int[size];
  for (size_t i{0}; i < size; ++i)
    *(new_storage + i) = init_value;
  return new_storage;
}

void display(const int *const array, size_t size) {
  for (size_t i{0}; i < size; ++i)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int *my_array{nullptr};
  size_t size;
  int init_value{};

  cout << "\nHow many integers would you like to allocate? ";
  cin >> size;
  cout << "What value would you like them initialized to? ";
  cin >> init_value;

  my_array = create_array(size, init_value);
  cout << "\n---------------------------" << endl;

  display(my_array, size);
  delete[] my_array;

  return 0;
}

/*
Stacked memory process explanation

1. main -> we initialize the program and allocate a space to main in the stack
        -> main has 3 variables that are also push to the stack
            ->my_array (which is a pointer to an array)
            ->size
            ->init_value
        -> we continue running the program and we store the values the user
enters to:
            ->size
            ->init_value
        -> we assign to 'my_array' the function call 'create_array'

2. create_array -> we called it in 'main' so now it is initialized and push to
stack
        -> create_array has 3 variables that are also push to the stack
            -> size
            -> init_value (with default value of 0)
            -> new_storage (which is a pointer to an integer)
        -> we activate the memory alloaction on the 'HEAP' with:
            -> new_storage = new int[size];
            -> which will store the number of integers entered ([size])
            -> and this statement will return the address of the first element
of the heap
            -> the previous means that the value of new_storage = address
        -> since the initialization of the heap has garbage values
            -> we store the values we want (in this case init_value) with the
for loop
            -> this for loop will go on until it hits i < size
            -> this for loop will iterate to every new address and asign the
value with:
              -> *(new_storage + i) = init_value;
              -> remember offset notation *(current adress + 4bytes)
            -> lastly we return new_storage (which is still the first element
address)
            -> and by returning that address = my_array, we make sure that when
we pop from the stack 'create_array' we will not loose that address in which the
            values are being storage for the array (this prevents a memory leak)

3. back to main -> returning to main will pop from the stack create_array
        -> w continue with the main program and hit display(my_array, size);
        -> since my_array is the value of the first element on the heap we can
        access all the values of this array (indicated by size)
        -> we go to 'display' this gets activated on the stack
        -> this function has 3 variables:
          -> array (which is a constant, and constant pointer because we dont
want it to change values or change pointing address)
          -> size
          -> i (which is only to iterate the loop)
        -> array = my_array = first element address
        -> we iterate through the array and print every value until i < size

4. back to main -> we unwined and remove 'display' from the stack
        -> we already displayed the values before returning to main so we don't
longer need the storage in the heap so we need to free it to prevent a overflow
        -> we use 'delete[] my_array;' to clear this memory space
        -> we return 0;
        -> the program ends
*/
