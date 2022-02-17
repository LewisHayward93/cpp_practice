#include <iostream>
/* simple program to print numbers inclusive of range;
 * uses istream
 */
int main(void) {
  int v1 = 0, v2 = 0, curr;
  std::cout << "Choose two numbers to print range of: " << std::endl;
  std::cin >> v1 >> v2;
  // if statement to ensure inputs in correct order smallest-largest
  if (v1 > v2) {
    int temp = v2;
    v2 = v1;
    v1 = temp;
  }
  std::cout << "The numbers between " << v1 << " and " << v2
            << " are: " << std::endl;
  curr = v1;
  while (curr <= v2) {
    std::cout << curr << std::endl;
    ++curr;
  }
  return 0;
}
