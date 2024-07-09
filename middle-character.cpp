#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    std::string result;
    if(len % 2 == 0) {
        result = s.substr(len/2-1, 2);
    } else {
        result = s.substr(len/2, 1);
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if(input.empty()) {
        std::cout << "Enter a non-empty string" << std::endl;
    } else {
        int len = input.length();
        std::string result = middleCharacter(input);
        if(!result.empty())
            std::cout << result << std::endl;
    }
    return 0;
}