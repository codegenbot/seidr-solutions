```c
#include <string>
#include <algorithm>
#include <iostream>

std::string spinWords(std::string str) {
    std::string word;
    std::string result = ""; 

    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::string reversedWord(word.rbegin(), word.rend());
                    result += reversedWord;
                } else {
                    result += word;
                }
                
                if (i < str.length()) {
                    result += " ";
                } else {
                    result = "";
                }
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            std::string reversedWord(word.rbegin(), word.rend());
            result += " ";
            result += reversedWord;
        } else {
            result += " ";
            result += word;
        } 
    } 
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Spinned String: " << spinWords(input) << std::endl;
    return 0;