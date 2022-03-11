#include <iostream>
/* simple program to print numbers 10-1;
 * using decrement pre-fix operator
 */
int main(void)
{
  int start = 10, end = 1;
  for (int i = 10; i >= 1; --i)
    std::cout << i << std::endl;
  return 0;
}
