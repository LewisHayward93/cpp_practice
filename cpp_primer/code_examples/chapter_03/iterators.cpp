#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::string s("some string");
    if (s.begin() != s.end()) // check to make sure s not empty
    {
        auto it = s.begin(); // it denotes first char in string
        *it = toupper(*it);  // dereference to access the element and change to upper
    }

    std::string s2("another string");
    for (auto it = s2.begin(); it != s.end() && !isspace(*it); ++it) // set iter to first char; stop before reach end or space
        *it = toupper(*it);

    std::cout << s << std::endl;  // Some string
    std::cout << s2 << std::endl; // ANOTHER string

    std::vector<int>::iterator it;          // it can read and write vector<int> elements
    std::vector<std::string>::iterator it2; // it2 can read and write vector<std::string> characters
    std::vector<int>::const_iterator it3;   // it3 can read but not write elements
    std::vector<std::string>::iterator it4; // it4 can read but not write characters

    // const_iterators should be used when we only want to read but not write elements/characters
    // to generate a const_iterator specifically we can use 'cbegin' and 'cend'

    auto i3 = s.cbegin(); // i3 is a const_iterator
    std::cout << *i3 << std::endl;

    /* dereferencing and member access */

    std::vector<std::string> v1 = {"my", "name", "is", "", "Smith"};

    // -> operator used for member access; v1->empty() same as (*v1).empty()
    for (auto it = v1.cbegin(); it != v1.cend() && !it->empty(); ++it)
        // prints out elements until reach empty string
        std::cout << *it << std::endl;
}