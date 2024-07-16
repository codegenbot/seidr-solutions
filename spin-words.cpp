#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5)
            result += new std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::cin >> input;
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}