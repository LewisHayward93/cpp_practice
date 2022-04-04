#include <iostream>

int main(void)
{
    std::string s = "Hello, World!!";
    for (auto &c : s)
        if (!ispunct(c))
            std::cout << c << std::endl;
}