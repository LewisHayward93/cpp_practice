#include "Sales_item.h"
#include "Version_test.h"
#include <iostream>
/* program that reads several transactions and counts occurrences of each ISBN
 */
int main(void)
{
  Sales_item currItem, item;
  int cnt = 1;
  // check there's input and select the item being checked against
  if (std::cin >> currItem)
  {
    while (std::cin >> item)
    {
      if (currItem.isbn() == item.isbn())
      {
        ++cnt;
      }
      else
      {
        std::cout << currItem << ": " << cnt << " occurrences." << std::endl;
        currItem = item;
        cnt = 1;
      }
    }
    std::cout << currItem << ": " << cnt << " occurrences." << std::endl;
  }
  return 0;
}
