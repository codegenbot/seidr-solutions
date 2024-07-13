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
                    result += " " + std::string(word.rbegin(), word.rend());
                } else {
                    result += " " + word;
                }
                
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            result += " " + std::string(word.rbegin(), word.rend());
        } else {
            result += " " + word;
        } 
    } 
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = spinWords(input); // Store result in a variable
    std::cout << "Spinned String: " << output << std::endl;
    return 0;
}