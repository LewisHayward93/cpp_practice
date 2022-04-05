#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<int> v1;                   // empty vector
    std::vector<int> v2(10);               // vector of 10 elements default to 0
    std::vector<int> v3(10, 42);           // vector of 10 elements set to 42
    std::vector<int> v4{10};               // vector containing one initialised element of 10
    std::vector<int> v4{10, 42};           // vector containing two elements -> 10 and 42
    std::vector<std::string> v6{10};       // vector of 10 elements of empty strings
    std::vector<std::string> v7{10, "hi"}; // vector of 10 elements of "hi"

    return 0;
}