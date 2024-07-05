#include <iostream>

// whit this we use the entire std namespace
using namespace std;

/*If we only want to use what we need then we would write it like this:
 * using std::cout
 * using std::cin
 * using std::endl
 * */

int main() {

  int favorite_number;
  cout << "Enter your favorite number between 1 and 100: ";
  cin >> favorite_number;
  cout << "Amazing thats my favorite number too!" << endl;

  return 0;
}
