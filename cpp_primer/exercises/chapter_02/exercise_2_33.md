Exercise 2.33: Using the variable definitions from this section, determine what
happens in each of these assignments:

    a = 42;		b = 42;
    c = 42;		d = 42;
    e = 42;		g = 42;

Definitions:
int i = 0, &r = i;
auto a = r; // a is an int (r is an alias for i, which has type int)
const int ci = i, &cr = ci;
auto b = ci; // b is an int (top-level const in ci is dropped)
auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
auto d = &i; // d is an int* (& of an int object is int*)
auto e = &ci; // e is const int\* (& of a const object is low-level const)
auto &g = ci; // g is a const int& that is bound to ci

Answer:
a = 42; // 42 is assigned to a.
b = 42; // 42 is assigned to the value of b.
c = 42; // 42 is assigned to the value of c. c was 0
d = 42; // error: d is a pointer to int. We must dereference it first.
e = 42; // error: e is a pointer to a constant int; it cannot point to an int.
g = 42; // error: g is a const int &. It cannot be reassigned after initialization.
