#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item total; // variable to hold data for next trans
  if (std::cin >> total) {
    Sales_item trans; // variable to hold data for running sum
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
