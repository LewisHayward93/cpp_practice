/* write a program to read a sequence of strings from cin and store in vector */

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<std::string> v1;
    std::string x;
    while (std::cin >> x)
        v1.push_back(x);

    for (auto i : v1)
        std::cout << " " << i << std::endl;
    return 0;
}