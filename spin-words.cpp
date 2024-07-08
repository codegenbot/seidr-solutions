#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}