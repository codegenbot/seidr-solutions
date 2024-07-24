#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i+1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5)
                std::reverse(word.begin(), word.end());
            
            result += word + " ";
        }
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    std::string s;
    while(true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, s);
        if (s == "exit")
            break;
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}