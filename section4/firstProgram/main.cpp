#include <iostream>

// entry point, where the execution begins, all cpp program must have a main
// and all cpp program should only have 1 main function.
// In this case an integer main function

int main()
{

  // variable to store the value the user enters (type integer)
  int favorite_number;

  // output to print the string and to tell the user to type something
  //<< its called stream insertion operator. In this case we insert anything
  // that is on the right side of the output stream that gets displayes on
  // console
  std::cout << "Enter your favorite number between 1 and 100: ";

  // input to read what the user just types and store it to the variable
  //>> its the stream extraction operator. Takes something from teh console
  // and we store it to a variable
  std::cin >> favorite_number;

  // another print just to feedbac the user
  // endl to flush the buffers and go out to the next line
  std::cout << "Amazing! thats my favorite number too!" << std::endl;

  return 0;
}
