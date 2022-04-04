#include <iostream>
#include <string>

int main(void)
{
    std::string s = "Hello, World!!!!";
    auto pnc_cnt = 0;
    for (auto &c : s) // c is a reference
    {
        c = toupper(c); // c is a reference so assignment changes c
        if (ispunct(c))
            ++pnc_cnt;
    }
    // print each char followed by new line to console
    // std::cout << c << std::endl;
    std::cout << s << std::endl;
    std::cout << pnc_cnt << std::endl;
}
