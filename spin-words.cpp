#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string word, output;
    std::istringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
    }
    
    output.pop_back(); // remove extra space at the end
    std::cout << output << std::endl;
    
    return 0;
}