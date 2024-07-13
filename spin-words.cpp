#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::string result = "";
    std::istringstream iss(sentence);
    std::string word;
    
    while (iss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = spinWords(input);
    std::cout << output << std::endl;
    
    return 0;
}