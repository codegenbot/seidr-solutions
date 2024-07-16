#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::string result;
    bool reversed = false;
    std::stringstream iss(str); 
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5)
            reversed = true;
        else
            reversed = false;
        
        if (reversed)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size()-1); 
}

int main() {
    std::cout << spinWords("Hello World this is a test") << std::endl;
    return 0;
}