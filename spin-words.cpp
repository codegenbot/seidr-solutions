#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::stringstream result;

    while (iss >> word) {
        if(word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result << word << " ";
    }

    return result.str();
}

int main() {
    // Example usage
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}