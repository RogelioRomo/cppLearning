#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
  int *data;

public:
  void set_data_value(int d) { *data = d; }
  int get_data_value() { return *data; }
  // constructor
  Move(int d);
  // copy constructor
  Move(const Move &source);
  // move constructor
  Move(Move &&source) noexcept;
  // Destructor
  ~Move();
};

Move::Move(int d) {
  data = new int;
  *data = d;
  cout << "Constructor for: " << d << endl;
}

// copy constructor
Move::Move(const Move &source) : Move{*source.data} {
  cout << "Copy constructor - deep copy for: " << *data << endl;
}

// Move constructor
Move::Move(Move &&source) noexcept : data(source.data) {
  source.data = nullptr;
  cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
  if (data != nullptr)
    cout << "Destructor freeing data for: " << *data << endl;
  else
    cout << "Destructor freeing data for nullptr" << endl;
  delete data;
}

int main() {
  vector<Move> vec;
  vec.push_back(Move{10});

  // vec.push_back(Move{20});
  // vec.push_back(Move{30});
  // vec.push_back(Move{40});
  // vec.push_back(Move{50});
  // vec.push_back(Move{60});
  // vec.push_back(Move{70});
  // vec.push_back(Move{80});

  cout << endl;
  return 0;
}

/*
Run process for this program without using the move constructor

  1. On main()
    -We declare a vector
    -We need to construct an object 'Move{10}', so we call the constructor

  2. In the constructor
    -We go to the constructor method and we allocate that object on the heap
    and store the value we pass to it (in this case 10); then we print the
std::cout

  3.- In the copy-constructor
    -Since we created a temporary on the heap we need to cpy it to the vector
    -So we initialize the copy-constructor, and use delegating to call the base
constructor -We go back to the base constructor to construct that deep copy
    -This will print again the std::cout with value of '10'
    -We move back to our copy-constructor and print the std::cout

  4. Back to main()
    -Since we are done with the copy we go back to main
    -The we use push_back to push the 'Move copy' object to vector
    -After leaving that copy with no use, the destructor is called automatically

  5. Destructor
    -We enter and check the conditionals
    -In this case we enter the 'if' and the std::cout is printed
    -We 'dete data;' to delte the copy

  6.- We come back to main()
    -And we return 0;
    -The program ends

    ***Remember that the copy constructor is inefficient***

Run process for this program withour using the move constructor

  -With this move-constructor we basically do the same but instead of calling
the copy constructor we call the move-constructor

  -Since we have a r-value temporary from the constructor we call the
move-constructor thanks to the double amperson '&&' (r-value)

  -Once called we basically 'STEAL' the data and null out the pointer of the
source object; so we are moving it rather than copying it

  -Another interesting thing is taht since we null out the pointer of the source
data, when calling the destructor this will 'read' the null data and will enter
the 'else' conditional instead of the 'if', because we move that data to the
vector and no longer exists in the source object

  Debug to see the behavior

  };
*/
