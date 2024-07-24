#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::istringstream iss(input);
    std::string word;
    std::string result;
    
    while (iss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    std::cout << result << std::endl;
    
    return 0;
}