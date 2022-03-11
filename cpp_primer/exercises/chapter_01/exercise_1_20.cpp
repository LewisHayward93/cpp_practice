#include "Sales_item.h"
#include <iostream>
/* read and write transaction of book */
int main(void)
{

  Sales_item book;                  // create variable book of type Sales_item
  while (std::cin >> book)          // whilst there is input, assign to book
    std::cout << book << std::endl; // print book
  return 0;
}
