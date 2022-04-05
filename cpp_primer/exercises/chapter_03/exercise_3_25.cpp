/* Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts. */

/*
std::vector<unsigned> scores(11,0);
unsigned grade;
while (std::cin >> grade) {
    if (grade <= 100)
        ++scores[grade/10];
}
*/

#include <iostream>
#include <vector>

int main(void)
{
    // create vector to hold scores all set to 0
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    auto it = scores.begin();

    while (std::cin >> grade)
    {
        // check for valid grade
        if (grade <= 100)
            // use arithmetic with iterator to select the correct element and increment
            ++*(it + grade / 10);
    }

    std::cout << "Scores: ";
    for (auto grade : scores)
        std::cout
            << ' ' << grade;

    std::cout << '\n';
}