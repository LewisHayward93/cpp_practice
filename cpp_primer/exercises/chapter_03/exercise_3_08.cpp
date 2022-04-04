#include <iostream>

int main(void)
{
    // while loop change all chars to 'X'
    std::string s = "My name is Lewis!";
    decltype(s.size()) idx = 0;
    while (idx < s.size())
        s[idx++] = 'X';
    std::cout << s << std::endl;
    // traditional for loop change all chars to 'O'
    for (decltype(s.size()) index = 0; index < s.size(); ++index)
        s[index] = 'O';
    std::cout << s << std::endl;
}