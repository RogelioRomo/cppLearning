#include <cctype>  //for character-based functions
#include <cstring> //for c-style string functions
#include <iostream>

using namespace std;

int main() {
  char first_ame[20]{};
  char last_name[20]{};
  char full_name[50]{};
  char temp[50]{};

  // cout << "Please enter your first name: ";
  // cin >> first_name;

  // cout << "Please enter your last name: ";
  // cin >> last_name;
  // cout << "------------------------------" << endl;

  // cout << "Hello " << first_name << " your first name has " <<
  // strlen(first_name) << " characters" << endl; cout << "and your last name "
  // << last_name << " has " << strlen(lastname) << " characters" << endl;

  // strcpy_s(full_name, first_name); //copy first_name to full_name
  // strcat_s(full_name, " "); //concatenate full_name and a space
  // strcat_s(full_name, last_name); //concatenate last_name to full_name
  // cout << "Your full name is " << full_name << endl;

  // showing behavior of cin extraction operator
  // cout << "-------------------------" << endl;
  // cout << "Enter your full name: ";
  // cin >> full_name; //it will only store the first word until it encounters a
  // space cout << "Your full name is " << full_name << endl;

  cout << "Enter your full name: ";
  cin.getline(full_name,
              50); // know it will store everything within 50 characters
  cout << "Your full name is " << full_name << endl;

  cout << "---------------------------" << endl;
  strcpy_s(temp, full_name); // we copy full_name into temp
  if (strcmp(temp, full_name) ==
      0) // we compare both strings, and if that comparison is equal to 0 then
         // we execute if
    cout << temp << " and " << full_name << " are the same" << endl;
  else
    cout << temp << " and " << full_name << " are different" << endl;
  cout << "---------------------------" << endl;

  for (size_t i{0}; i < strlen(full_name); ++i) {
    if (isalpha(full_name[i])) // if the letter is an alpha character
      full_name[i] =
          toupper(full_name[i]); // then we convert that letter to upper case
  }
  cout << "Your full name is " << full_name << endl;

  cout << "---------------------------" << endl;
  if (strcmp(temp, full_name) == 0)
    cout << temp << " and " << full_name << " are the same " << endl;
  else
    cout << temp << " and " << full_name << " are different" << endl;

  cout << "---------------------------" << endl;
  // strcmp returns 0 if the strings are the same, in the next case it returns 1
  // and -1
  ////these positive and negative values have to do with lexicalitty
  cout << "Result of comparing" << temp << " and " << full_name << ": "
       << strcmp(temp, full_name) << endl;
  cout << "Result of comparing" << full_name << " and " << temp << ": "
       << strcmp(full_name, temp) << endl;
}
