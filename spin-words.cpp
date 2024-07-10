#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string word, result;
    std::istringstream iss(input);
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