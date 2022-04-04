#include <iostream>
/* Which of the following are valid or invalid
 */
int main() {
  int i = 5, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159; // valid: d = 3.14159 as changes to r2, changes &r2
  std::cout << d << std::endl; // d is 3.14159
  r2 = r1;                     // valid: r2 = 0
  std::cout << d << std::endl; // d is 5 as r1 = 5, r2  = r1 and d = r2
  i = r2;                      // valid: i = 3
  r1 = d;                      // valid: r1 = 0
}
