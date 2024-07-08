#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result = "";

    while (iss >> word) {
        if (word.length() >= 5) {
            for (int i = word.length() - 1; i >= 0; i--) {
                result += word[i];
            }
        } else {
            result += word + " ";
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}