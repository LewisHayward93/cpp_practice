#include <iostream>
/* simple program to print numbers 10-1;
 * using decrement pre-fix operator
 */
int main(void) {
  int start = 10, end = 1;
  while (start >= end) {
    std::cout << start << std::endl;
    --start;
  }
  return 0;
}
