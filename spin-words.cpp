Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word = "";
    
    for (char c : input) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;
    
    return output;
}

int main() {
    std::string input;
    while(std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}