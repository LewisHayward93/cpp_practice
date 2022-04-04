#include <iostream>

/* A pointer is a compound type that “points to” another type.
Like references, pointers are used for indirect access to other objects.
Unlike a reference, a pointer is an object in its own right.
Pointers can be assigned and copied; a single pointer can point to several
different objects over its lifetime. Unlike a reference, a pointer need not be
initialized at the time it is defined. Like other built-in types, pointers
defined at block scope have undefined value if they are not initialized.
*/

int main(void)
{
  int ival = 42;
  int *p = &ival; // p holds the address of ival; p is a pointer to ival
  // * yields the object to which p points; prints 42
  std::cout << *p << std::endl;
  // * yields the object to which p points; prints 42
  *p = 0; // * yields the object; we assign a new value to ival through p
          // dereferences p to print value associated (ival), prints 0
  std::cout << *p << std::endl;
  std::cout << ival << std::endl; // prints 0
  int *p1 = nullptr;              // equivalent to int *p1 = 0;
  int *p2 = 0;                    // directly initializes p2 from the literal constant 0
}
