/* write a program to read a swquence of int from cin and store in vector */

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<int> v1;
    int x;
    while (std::cin >> x)
        v1.push_back(x);

    for (auto i : v1)
        std::cout << " " << i << std::endl;
    return 0;
}