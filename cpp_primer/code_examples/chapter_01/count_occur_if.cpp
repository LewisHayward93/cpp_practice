#include <iostream>
/* simple program to count occurences of same value from input
 * uses if statement
 */
int main(void) {
  // currVal is the number that is being counted and any new value is put into
  // val
  int currVal = 0, val = 0;
  // read the first input to ensure there is data coming through
  if (std::cin >> currVal) {
    int cnt = 1;              // counter for occurrences
    while (std::cin >> val) { // reads remaining numbers
      if (val == currVal)     // checks if equals first num
        ++cnt;                // increase count
      else {                  // if new number then print result
        std::cout << "total occurrences of " << currVal << ": " << cnt
                  << std::endl;
        currVal = val; // currVal changes to new input
        cnt = 1;       // reset counter
      }
    }
    std::cout << "total occurrences of " << currVal << ": " << cnt << std::endl;
  }
  return 0;
}
