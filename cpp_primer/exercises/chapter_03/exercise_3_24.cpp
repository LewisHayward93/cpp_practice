/* Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators. */

/* Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of adjacent elements.
Change your program so that it prints the sum of the first and last elements,
followed by the sum of the second and second-to-last, and so on. */

#include <iostream>
#include <vector>

int main(void)
{
    // create empty vector and int to hold input values
    std::vector<int> ivec;
    int x;

    // read input into vector
    while (std::cin >> x)
        ivec.push_back(x);

    std::cout << "Original vector: ";
    // print the original vector
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    std::cout << "Adjacent sum: ";
    for (auto it = ivec.begin() + 1; it != ivec.end(); ++it)
    {
        std::cout << ' ' << *it + *(it - 1);
    }

    std::cout << '\n';

    std::cout << "Pairs sum: ";

    auto beg = ivec.begin();
    auto end = ivec.end() - 1;

    while (beg < end)
        std::cout << ' ' << *beg++ + *end--;

    std::cout << '\n';
}
