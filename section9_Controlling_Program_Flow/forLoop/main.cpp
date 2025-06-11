#include <iostream>
#include <vector>

using namespace std;

int main() {
  // for(int i{1}; i <= 10; ++i)
  //   cout << i << endl;

  // for(int i{1}; i <= 10; i+=2)
  //   cout << i << endl;

  // notice in the next example that identation matters
  // for will only loop cout << i << endl; and not Blastoff
  // because we dont have curly braces {}
  // for(int i{10}; i > 0; --i)
  //   cout << i << endl;
  // cout << "Blastoff!" << endl;

  // for(int i{10}; i <= 100; i += 10) {
  //   if(if % 15 == 0)
  //     cout << i << endl;
  // }

  // for(int i{1}, j{5}; i<=5; ++i, ++j)
  //   cout << i << " + " << j << " = " << (i+j) << endl;

  // for(int i{1}; i<=100; ++i){
  //   cout << i;
  //   if(i % 10 == 0)
  //     cout << endl;
  //   else
  //     cout << " ";
  // }

  // for(int i{1}; i<= 100; ++i) {
  //   cout << i << ((i % 10 == 0) ? "\n" : " ");
  // }

  vector<int> nums{10, 20, 30, 40, 50};

  //.size() returns an unsigned integers thats why we use
  // unsigned in the initialization part of the for loop
  for (unsigned i{0}; i <= nums.size(); ++i)
    cout << nums[i] << endl;

  cout << endl;
  return 0;
}
