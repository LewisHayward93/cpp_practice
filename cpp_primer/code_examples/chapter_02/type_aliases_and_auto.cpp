// type aliases make it easier to understand the type of a variable
// before c++ 11, 'typedef' was used, however, now we can use the keyword 'using'

#include <iostream>
#include "Sales_item.h"

int main(void)
{
    using wages = double;  // wages is a synonym for double
    using SI = Sales_item; // SI is a synonym for Sales_item

    /* AUTO */
    auto v3 = v1 + v2;      // keyword auto will determing the type of v3 based on the outcome of v1 + v2
    auto i = 0, *p1 = &i;   // ok: is an int and p is a pointer to int
    auto sz = 0, pi = 3.14; // error: inconsistent types (int and double)

    int i = 0, &r = i;
    auto a = r; // a is an int as r is reference to int

    // top-level consts are dropped, must say const auto to explicitly make a top-level const
    const auto b = i;
}