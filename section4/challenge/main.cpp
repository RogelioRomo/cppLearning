#include <iostream>

int main() {

  // variable to store the value the user enters (integer type)
  int favorite_number;

  // uotput to print the string and to tell the user to type something
  std::cout << "Enter your favorite number between 1 and 100: ";

  // input to read what the user just typed and store it to the variable
  std::cin >> favorite_number;

  // another print just to feedback the user
  // endl to flush the buffers and go out to the next line
  std::cout << "Amazing! thats my favorite number too!" << std::endl;

  // we use the insertion operator to create strig with variables
  std::cout << "No really!, " << favorite_number << " is my favorite number!"
            << std::endl;

  return 0;
}
