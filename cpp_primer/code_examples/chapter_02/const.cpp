#include <iostream>

extern const int d =
    2; // constant defines and initialised; accessible in other files

int main(void)
{

  /* Reference to const */

  const int i = 1; // const int
  int b = i;       // b = i
  // int c = ++i; // illegal as i is constant

  const int e = 1000;
  const int &r1 = e;
  // r1 = 20; // illegal as r1 reference to const
  // int &r2 = e // illegal as e is const and &r2 is not const reference
  int g = 1;
  const int &r2 = g; // r2 is a const reference and therefore can't be used to
                     // change value of g
  std::cout << r2 << std::endl;
  g = 3;
  std::cout << r2 << std::endl; // r2 is now 3 as we can change the value of g

  /* Pointers */

  /* pointers to const are pointers that point to either const or nonconst types;
  like a reference to const, a pointer to const may not be used to change the object to which
  the pointer points. Storage of the address of a const object can only be stored in a pointer
  to const
  */

  const double pi = 3.14;
  const double *cptr = &pi; // cptr may point to a double that is a const
  *cptr = 42; // Error: read only variable is not assignable

  /* Unlike references, pointers themselves are objects tand there a pointer can itself be const;
  const pointer must be initialised and its value may not be changed
  */

  int errNumb = 0;
  int *const currErr = &errNumb; // currErr will always point to errNumb
  const double *const pip = &pi; // pip is a const pointer to a const object

  /* Easier to read from right to left;
  currErr is a const pointer to an object of type int
  pip is a const pointer to an object of type const double
  */

}
