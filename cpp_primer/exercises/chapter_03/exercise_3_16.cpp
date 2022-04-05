/*
 * Exercise 3.16: Write a program to print the size and contents of the vectors
 * from exercise 3.13. Check whether your answers to that exercise were
 * correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were
 * wrong.
 */

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<int> v1;                   // empty vector
    std::vector<int> v2(10);               // vector of 10 elements default to 0
    std::vector<int> v3(10, 42);           // vector of 10 elements set to 42
    std::vector<int> v4{10};               // vector containing one initialised element of 10
    std::vector<int> v5{10, 42};           // vector containing two elements -> 10 and 42
    std::vector<std::string> v6{10};       // vector of 10 elements of empty strings
    std::vector<std::string> v7{10, "hi"}; // vector of 10 elements of "hi"

    std::vector<std::vector<int> > v8 = {v1, v2, v3, v4, v5};
    std::vector<std::vector<std::string> > v9 = {v6, v7};

    for (auto i : v8)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << std::endl;
    }

    for (auto h : v9)
    {
        for (auto k : h)
            std::cout << k << " ";
        std::cout << std::endl;
    }

    return 0;
}