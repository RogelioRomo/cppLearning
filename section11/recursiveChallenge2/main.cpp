#include <iomanip>
#include <iostream>

using namespace std;

int function_activation_count{0};

double a_penny_doubled_everyday(int n, double m = 0.01);

void amount_accumulated() {
  double total_amount = a_penny_doubled_everyday(25);
  cout << "If I start with a penny and doubled it every day for 25 days, I "
          "will have $"
       << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int n, double m) {
  function_activation_count++;
  if (n <= 1)
    return m;
  return a_penny_doubled_everyday(--n, m * 2);
}

int test_function_activation_count() { return function_activation_count; }

// This example doesnt have a main, its just to show how the mathematical
// recursive function works
