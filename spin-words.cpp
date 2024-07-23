#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    bool reverseWord = false;

    for (char c : str) {
        if (c == ' ') {
            if (reverseWord) {
                std::reverse(result.begin(), result.end());
                result += " ";
                reverseWord = false;
            }
            else {
                result += " " + c;
            }
        } 
        else {
            if (!reverseWord && c != ' ') {
                reverseWord = true;
            }
            result += c;
        }
    }

    if (reverseWord) {
        std::reverse(result.begin(), result.end());
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