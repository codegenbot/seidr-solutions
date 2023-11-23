#include <iostream>
#include <sstream>
#include <string>

std::string reverseWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // remove the extra space at the end
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string reversed = reverseWords(sentence);
    std::cout << reversed << std::endl;

    return 0;
}