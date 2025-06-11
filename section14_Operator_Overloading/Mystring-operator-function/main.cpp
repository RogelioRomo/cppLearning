#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring larry{"Larry"};
    larry.display(); // Larry

    larry = -larry;
    larry.display(); // larry

    cout << boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;

    cout << (larry == moe) << endl;    // false
    cout << (larry == stooge) << endl; // true

    // Mystring stooges = larry + "Moe";
    Mystring stooges = "Larry" + moe; // Now OK with non-member functions
    stooges.display();                // LarryMoe

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display(); // Moe Larry

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe Larry Curly

    return 0;
}