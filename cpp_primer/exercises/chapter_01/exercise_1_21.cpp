#include "Sales_item.h"
#include <iostream>
/* read and write transaction of book */
int main(void)
{

  Sales_item book1, book2;                 // create 2 variables of type Sales_item
  std::cin >> book1 >> book2;              // assign cin to variables
  std::cout << book1 + book2 << std::endl; // addItems
  return 0;
}
