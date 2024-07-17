#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    
    while (ss >> word) {
        if (word.length() >= 5)
            word = std::string(word.rbegin(), word.rend());
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    // Testing the code
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}