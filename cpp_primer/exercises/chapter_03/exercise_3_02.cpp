/* using getline function to read the whole line input */

#include <iostream>
#include <string>

int main(void)
{
    std::string line;
    while (getline(std::cin, line))
    {
        // use auto if creating var to store string size
        auto line_length = line.size();
        // check line not empty and less than 10 chars
        if (!line.empty() && (line.size() < 10))
        {
            std::cout << line << std::endl;
            std::cout << line_length << std::endl;
        }
    }

    return 0;
}