#include <iostream>

int main(void) {
  int i = 42;      // creates int i value 42
  int *p1 = &i;    // creates int pointer with i
  *p1 = *p1 * *p1; // changes value of i by dereferencing *pi and squaring

  std::cout << *p1 << std::endl; // dereference to give value of i
  std::cout << i << std::endl;   // i is now 1764
  std::cout << &i << std::endl;  // memory address of i
  std::cout << p1 << std::endl;  // memory address of i
}
