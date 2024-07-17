```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    
    while (iss >> word) {
        if (word.size() >= 5)
            std::reverse(word.begin(), word.end());
        
        std::cout << word << " ";
    }
    
    return "";
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}