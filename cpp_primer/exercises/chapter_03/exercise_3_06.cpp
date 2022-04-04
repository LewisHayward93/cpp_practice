/* Use a for range to change all the characters in a string to X */
#include <iostream>

int main(void)
{
    std::string s = "My name is Lewis!";
    for (auto &c : s)
        c = 'X';
    std::cout << s << std::endl;
}