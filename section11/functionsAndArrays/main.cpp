#include <iostream>

using namespace std;

void print_array(const int arr[],
                 size_t size); // arr[] is not a copy of the array, is the
                               // loation address of the original array
void set_array(int arr[], size_t, int value);

void print_array(const int arr[], size_t size) { // const
  for (size_t i{0}; i < size; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
  for (size_t i{0}; i < size; ++i)
    arr[i] = value;
}

int main() {
  int my_scores[]{100, 98, 90, 86, 84};

  print_array(my_scores, 5);
  set_array(my_scores, 5, 100);
  print_array(my_scores, 5);

  cout << endl;
  return 0;
}

/*
 UDEMY exercise

 #include <iostream>
 #include <string>
 #include <typeinfo>

 using namespace std;

 string print_guest_list(const string[], size_t value);
 void clear_guest_list(string[], size_t size value);

 void event_guest_list() {
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size{3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
 }

 string print_guest_list(const string guest_list[], size_t guest_list_size) {
    for(size_t i{0}; i < guest_list_size; ++i)
      cout << guest_list[i] << endl;

    return typeid(guest_list).name();
 }

 void clear_guest_list(string guest_list[], size_t guest_list_size) {
    for(size_t i{0}; i < guest_list_size; ++i)
      guest_list[i] = " ";
 }

*/
