#include <iostream>
/* simple program to print numbers inclusive of range;
 * uses istream
 */
int main(void)
{
  int v1 = 0, v2 = 0;
  std::cout << "Choose two numbers to print range of: " << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The numbers between " << v1 << " and " << v2
            << " are: " << std::endl;
  int i;
  for (int i = v1; v1 <= v2; ++v1)
    std::cout << v1 << std::endl;
  return 0;
}
