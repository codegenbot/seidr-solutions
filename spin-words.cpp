#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

std::string result = "";

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string word;

    std::istringstream iss(input);
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    std::cout << result;
    
    return 0;
}