#include <iostream>

int main(void)
{
    int i = 42;
    void *p = &i; // valid as void pointer can point to object of any type
    // long *lp = &i; // cannot initialise a variable of type 'long *' with and rvalue of type 'int *'
    return 0;
}
