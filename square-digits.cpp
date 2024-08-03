#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int num = (int)(c - '0'); // convert char to int
        int squared = num * num;
        std::string temp = std::to_string(squared);
        output += temp;
    }
    return output;
}