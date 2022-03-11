#include <iostream>
/* simple program to sum inputs;
 * unknown number of unputs
 */
int main(void)
{
  int sum = 0, value = 0;
  // will continue reading until hits EOF (ctrl-D on unix)
  while (std::cin >> value)
    sum += value;
  std::cout << "The total sum is: " << sum << std::endl;
  return 0;
}
