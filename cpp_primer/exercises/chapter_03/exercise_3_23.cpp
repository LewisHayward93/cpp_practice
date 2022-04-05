/* Exercise 3.23: Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
*/

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Original vector: ";
    for (auto i : v)
        std::cout << " " << i;

    for (auto it = v.begin(); it != v.end(); ++it)
        *it *= 2;

    std::cout << std::endl;

    std::cout << "Updated vector: ";
    for (auto i : v)
        std::cout << " " << i;

    std::cout << std::endl;

    return 0;
}