#include <iostream>
/* print 2M followed by new line;
 * print 2 then tab then M then newline */
int main(void)
{
  std::cout << ">"
            << "2M\n"
            << "<" << std::endl;
  std::cout << ">"
            << "2\tM\n"
            << "<" << std::endl;
  return 0;
}
