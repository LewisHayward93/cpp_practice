// decltype is a keyword that defines a variable with a type that the compiler deduces from and expression.

#include <iostream>

int main(void)
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has a type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    decltype(cj) z;     // error: z is a reference to const and must be initialised

    decltype((ci)) zz = x; // if parentheses used with decltype, always a reference
}