#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    std::string output = "";
    for (char digit : input) {
        int num = digit - '0';
        int square = num * num;
        if (square > 9) {
            square -= 10; // Adjust square to be in range 0-9
        }
        output += '0' + square;
    }

    std::cout << output << std::endl;

    return 0;
}