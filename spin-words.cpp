#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::string result = "";

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // remove the extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}