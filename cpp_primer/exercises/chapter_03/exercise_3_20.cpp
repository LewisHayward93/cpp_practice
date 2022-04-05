/* Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of adjacent elements.
Change your program so that it prints the sum of the first and last elements,
followed by the sum of the second and second-to-last, and so on. */

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v1;
    int x;

    while (std::cin >> x)
        v1.push_back(x);

    std::cout << "Original vector: ";
    for (auto i : v1)
        std::cout << " " << i;

    std::cout << "\n"
              << std::endl;

    std::cout << "Adjacent sums: ";

    for (decltype(v1.size()) i = 0; i < v1.size() - 1; ++i)
        std::cout << v1[i] + v1[i + 1] << " ";

    std::cout << "\n"
              << std::endl;

    auto end = v1.size();

    for (decltype(v1.size()) i = 0; i < end / 2; ++i)
        std::cout << v1[i] + v1[end - 1 - i] << " ";

    std::cout << "\n"
              << std::endl;

    return 0;
}