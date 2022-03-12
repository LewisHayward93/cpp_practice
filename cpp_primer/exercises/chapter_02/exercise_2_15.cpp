#include <iostream>
/* Which of the following are valid or invalid
 */
int main()
{
  int ival = 1.01;   // valid: implicit type conversion double to float so truncated
  int &rval1 = 1.01; // invalid: initializer must be an object
  int &rval2 = ival; // valid
  int &rval3;        // invalid:  errors must be initialized
}
