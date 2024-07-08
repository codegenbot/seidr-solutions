#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/split.hpp>
#include <boost/algorithm/join.hpp>

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::vector<std::string> words = boost::algorithm::split(input, ' ');

    // Reverse each word that is 5 or more letters long.
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord = boost::algorithm::reverse(words[i]);
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    std::string output = boost::algorithm::join(words, ' ');

    std::cout << output << '\n';

    return 0;
}