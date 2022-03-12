#include <iostream>
/*A reference defines an alternative name for an object;
A reference type “refers to” another type.
*/

int main(void)
{
    int ival = 1024;
    int &refVal = ival;      // refVal refers to ival
    int &refVal2;            // error: a reference must be initialized
    int i = 1024, i2 = 2048; // i and i2 are both ints
    int &r = i, r2 = i2;     // r is a reference bound to i; r2 is an int
    int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
    int &r3 = i3, &r4 = i2;  // both r3 and r4 are references
}
