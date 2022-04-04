#include <iostream>

int main(void)
{
    std::string s = "My name is Lewis!";
    for (char &c : s)
        c = 'X';
    std::cout << s << std::endl;
}