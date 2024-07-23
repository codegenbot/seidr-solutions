#include <iostream>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::stringstream ss(input);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1); 
}

int main() {
    std::cout << spinWords("ctflat") << std::endl; 
    return 0;
}