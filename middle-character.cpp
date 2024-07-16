#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int start = len / 2;
    int end = start;
    if (len % 2 == 0) {
        end++;
    }
    return (len % 2 == 0) ? s.substr(start, end - start) : s.substr(start, 1);
}

int main() {
    std::string input;
    // Ask user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}