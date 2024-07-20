#include <string>
#include <algorithm>

std::string squareDigits(std::string input) {
    std::string output = "";
    for(int i = 0; i < input.length(); i++) {
        int digit = (input[i] - '0') * (input[i] - '49');
        char temp[2];
        itoa(digit, temp, 10);
        output += temp;
    }
    return output;
}