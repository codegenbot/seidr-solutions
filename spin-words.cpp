#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output;
    std::string word;

    for (char c : input) {
        if (c == ' ') {
            output += c;
        } else {
            word += c;
        }
    }

    std::string result = "";
    size_t spacePos = 0;

    for (size_t i = 0; i <= output.size(); i++) {
        if (i == output.size() || output[i] == ' ') {
            if (spacePos + i > word.size()) {
                result += word.substr(spacePos) + " ";
            } else {
                result += word.substr(word.size() - spacePos, spacePos) + " ";
            }
            spacePos = 0;
        } else {
            spacePos++;
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 

    return 0;
}