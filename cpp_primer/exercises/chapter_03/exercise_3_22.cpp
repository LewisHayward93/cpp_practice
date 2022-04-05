/* Exercise 3.22: Revise the loop that printed the first paragraph in text to instead
change the elements in text that correspond to the first paragraph to all uppercase.
After you’ve updated text, print its contents. */

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<std::string> text;
    std::string line;

    // read the cin into string and push into vector
    while (getline(std::cin, line))
        text.push_back(line);

    // loop through vector using iterator
    for (auto it = text->begin(); it != text->cend(); ++it)
    {
        // loop through each char using iterator and change to uppercase
        for (auto &c : *it)
            c = toupper(c);
        std::cout << *it << std::endl;
    }
}