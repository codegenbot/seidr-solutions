#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    if (input.empty()) {
        return "";
    }
    int len = input.length();
    std::string result;
    if (len == 1) {
        result = input; 
    } else {
        int midIndex = len / 2;
        result = len % 2 ? input.substr(midIndex, 1) : input.substr(midIndex - 1, 2);
    }
    return result;
}

int main() {
    return 0;
}