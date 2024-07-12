#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string word;
    std::stringstream ss(input);
    std::string result = "";
    
    while (ss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back();
    std::cout << result;
    
    return 0;
}