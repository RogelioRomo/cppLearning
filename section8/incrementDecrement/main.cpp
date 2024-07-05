#include <iostream>

using namespace std;

int main() {
  int counter{10};
  int result{0};

  // Example 1 - simple increment
  // cout << "Counter: " << counter << endl;

  // counter = counter + 1;
  // cout << "Counter: " << counter << endl;

  // counter++;
  // cout << "Counter: " << counter << endl;

  //++counter;
  // cout << "Counter: " << counter << endl;

  // Example 2 - pre-increment
  // counter = 10;
  // result = 0;

  // cout << "Counter: " << counter << endl

  // result = ++counter; //note the preincrement, we increment counter before we
  // use it cout << "Counter: " << counter << endl; cout << "Result: " << result
  // << endl;

  // Example 3
  // counter = 10;
  // result = 0;

  // cout << "Counter: " << counter << endl;

  // result = counter++; //note the post-increment, we increment counter after
  // we use it cout << "Counter: " << counter << endl; cout << "Result: " <<
  // result << endl;

  // Example 4
  // counter = 10;
  // result = 0;

  // cout << "Counter: " << counter << endl
  // result = ++counter + 10; //note the preincremen

  // cout << "Counter: " << counter << endl;
  // cout << "Result: " << result << endl;

  // Example 5
  counter = 10;
  result = 0;

  cout << "Counter: " << counter << endl;
  result = counter++ + 10; // note the post-increment

  cout << "Counter: " << counter << endl;
  cout << "Result: " << result << endl;

  cout << endl;
  return 0;
}
