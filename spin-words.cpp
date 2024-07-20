#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            word = "";
        } 
        else 
            word += c;
    }

    if (word.length() >= 5)
        result += std::string(word.rbegin(), word.rend());
    else
        result += word;

    return result;
}

int main() {
    std::cout << spinWords("this is just a test") << std::endl;
    return 0;