/* Exercise 3.19: List three ways to define a vector and give it ten elements, each with the value 42.
Indicate whether there is a preferred way to do so and why. */

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    std::vector<int> v2(10, 42);
    std::vector<int> v3;
    for (decltype(v3.size) i = 0; i < 10; ++i)
        v3.push_back(42);

    // the second option is preferred as it's easier to read and we know the size of the vector
}