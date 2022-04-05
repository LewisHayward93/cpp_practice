/* Exercise 3.17: Read a sequence of words from cin and store the values a vector.
After you’ve read all the words, process the vector and change each word to uppercase.
Print the transformed elements, eight words to a line. */
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::vector<std::string> words;
    std::string word;

    while (std::cin >> word)
        words.push_back(word);

    for (auto &word : words)
    {
        for (auto &letter : word)
            letter = toupper(letter);
    }

    for (decltype(words.size()) i = 0; i < words.size(); ++i)
    {
        if (i % 8 == 0)
        {
            std::cout << "\n";
        }
        std::cout << words[i] << " ";
    }
    std::cout << "\n";

    return 0;
}