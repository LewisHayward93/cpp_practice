#include <iostream>
  int i = 42;
int main() {
  int i = 100;
  int j = i; // j is 100 as local var hides global
  std::cout << "The value of j is " << j << std::endl;

}
