#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(std::string sentence) {
    std::string word, result;
    std::istringstream iss(sentence);

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // remove extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << reverseWords(input) << std::endl;

    return 0;
}