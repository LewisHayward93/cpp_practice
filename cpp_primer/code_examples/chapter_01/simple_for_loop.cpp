#include <iostream>
/* simple program with for loop example */
int main(void)
{
  int sum = 0;
  // sum values from 1 through 10 inclusive
  // val variable is now only accessible within the for loop
  for (int val = 1; val <= 10; ++val)
    sum += val;
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}
