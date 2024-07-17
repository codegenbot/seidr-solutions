#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word) {
        if(word.length() >= 5)
            output += std::string(word.rbegin(), word.rend()) + " ";
        else
            output += word + " ";
    }
    
    return output.substr(0, output.size()-1);
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