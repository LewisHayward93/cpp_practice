#include <iostream>

int main(void)
{
    int a = 3, b = 4;
    decltype(a) c = 4;
    decltype((b)) d = a;
    ++c;
    ++d;

    // a = 4 -> int
    // b = 4 -> int
    // c = 5 -> int
    // d = 4 -> int&
}