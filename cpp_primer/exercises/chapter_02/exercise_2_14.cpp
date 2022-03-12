#include <iostream>

int i = 42;

int main()
{
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i)
    sum += i; // sum uses local i here
  std::cout << i << " " << sum << std::endl;
  // global i printed as for loop i local to the loop
  // i = 100, sum = 45
}
