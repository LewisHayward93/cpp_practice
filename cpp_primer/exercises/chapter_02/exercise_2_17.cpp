#include <iostream>
/* Which of the following are valid or invalid
 */
int main()
{
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl; // 10 10 as ri and i bound together
}