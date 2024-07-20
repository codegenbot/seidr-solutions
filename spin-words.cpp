#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    
    std::string result = "";
    
    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1); // remove the extra space at the end
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}