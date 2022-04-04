Exercise 2.32: Is the following code legal or not? If not, how might you make
it legal?

    int null = 0, *p = null;

By Faisal Saadatmand

Illegal: though initialized from a literal, i.e. a constant, null is a plain
int object with a memory address, and thus, it is not a constant expression. As
such, it cannot be used to initialize p, which is a pointer to an int.
