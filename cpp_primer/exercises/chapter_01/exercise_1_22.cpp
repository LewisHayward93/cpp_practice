#include "Sales_item.h"
#include <iostream>
/* read and write transaction of book */
int main(void)
{

  Sales_item book, total; // create 2 variables of type Sales_item
  if (std::cin >> total)
  {
    while (std::cin >> book)
      total += book;
  }
  std::cout << total << std::endl;
  return 0;
}
