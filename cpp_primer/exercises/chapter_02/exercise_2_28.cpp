#include <iostream>

int main(void)
{
  int i, *const cp;      // i -> int, error: cp -> const pointer to int but needs initialising
  int *p1, *const p2;    // *p1 -> *int, error: p2 -> const pointer to int but needs initialising
  const int ic, &r = ic; // ic -> const int, error: r -> r requires ic to be initialised
  const int *const p3;   // error: const pointer requires initialising
  const int *p;          // *p -> pointer to object of type const int

  return 0;
}
