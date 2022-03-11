#include <iostream>

int main() {
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i)
    sum += i; // sum uses local i here
  // global i printed as for loop i local to the loop
  std::cout << i << " " << sum << std::endl; // i = 100, sum = 45
}
