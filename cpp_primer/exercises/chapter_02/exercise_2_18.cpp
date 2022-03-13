#include <iostream>
/* simple program to change value of a pointer;
write code to change the value to which the pointer points
*/
int main(void)
{
  int i = 1;
  int *ip = &i;
  std::cout << *ip << std::endl; // print 1

  i = 10;
  std::cout << *ip << std::endl; // print 10

  *ip = 5;
  std::cout << i << std::endl; // print 5
}