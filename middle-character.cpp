```cpp
#include <iostream>
#include <string>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    if(len % 2 == 0) {
        int midIndex = len / 2;
        return s.substr(midIndex-1, 2);
    } else {
        int midIndex = len / 2;
        return s.substr(midIndex, 1);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}