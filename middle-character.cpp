#include <iostream>
#include <string>

std::string getMiddleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 0) {
        return str.substr(length/2 - 1, 2);
    } else {
        return str.substr(length/2, 1);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    
    std::string result = getMiddleCharacter(input);
    std::cout << "Output: " << result << std::endl;
    
    return 0;
}