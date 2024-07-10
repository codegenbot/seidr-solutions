#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int num = (c - '0') * (c - '0');
        char sq = '0' + (num % 10);
        output += sq;
    }
    return output;
}