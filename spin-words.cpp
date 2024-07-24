#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            if(str.find(' ', i+1) != std::string::npos)
                word = str.substr(i-str.find(' ', i+1)+i, i- (i-str.find(' ', i+1)+i));
            else
                word = i > 0 ? str.substr(i-1, i-i+1) : str.substr(0, i);
            
            if(word.length() >= 5)
                std::reverse(word.begin(), word.end());
            
            if(!result.empty())
                result += " ";
            result += word;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl; 
    return 0;
}