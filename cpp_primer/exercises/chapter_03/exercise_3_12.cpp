#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<std::vector<int> > ivec;          // legal -> a vector containing vectors of int
    std::vector<std::string> svec = ivec;         // illegal -> vector contain different types
    std::vector<std::string> svec = (10, "null"); // legal -> vector containing 10 elements of "null"
}