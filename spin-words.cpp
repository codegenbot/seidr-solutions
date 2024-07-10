#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            if (word.length() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}