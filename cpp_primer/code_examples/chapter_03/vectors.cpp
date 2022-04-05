#include <iostream>
#include <vector>
#include "Sales_item.h"
#include <string>
#include "Version_test.h"

int main(void)
{
    std::vector<int> ivec;                              // default initialisation with no elements
    std::vector<std::string> svec = {"hello", "world"}; // string vector with two elements; must be curly braces for list initialisation
    std::vector<Sales_item> book1;                      // vector is a container for sales items defined in header
    std::vector<int> anothervec(10, 1);                 // vector with 10 elements of the number 1
    std::vector<int> v1(10);                            // 10 elements initialised to 0 as this is default
    std::vector<std::string> v2(10);                    // 10 elements initialised to empty string
    std::vector<std::string> v3{10};                    // we can use curly braces for size also

    // must give value as well as size if there is no default value for the object inside the vector

    std::vector<int> seq; // empty vector for ints
    for (int i = 0; i < 100; ++i)
        seq.push_back(i);
    // creates a vector with 100 elements from 0...99 sequentially
    // same process can be used with cin

    return 0;
}