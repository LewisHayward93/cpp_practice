# Exercise 2_23

No, you can't. Because it would be expensive to maintain meta data about what constitutes a valid pointer and what doesn't, and in C++ you don't pay for what you don't want.

However, a smart pointer can be used to tell if it points to a valid object.

