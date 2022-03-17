#include <iostream>

extern const int d = 2; // constant defines and initialised; accessible in other files

int main(void)
{
    const int i = 1; // const int
    int b = i;       // b = i
    // int c = ++i; // illegal as i is constant

    const int e = 1000;
    const int &r1 = e;
    // r1 = 20; // illegal as r1 reference to const
    // int &r2 = e // illegal as e is const and &r2 is not const reference

    int g = 1;
    const int &r2 = g; // r2 is a const reference and therefore can't be used to change value of g
    std::cout << r2 << std::endl;

    g = 3;
    std::cout << r2 << std::endl; // r2 is now 3 as we can change the value of g
}