#include <string>
#include <algorithm>

std::string squareDigits(std::string input) {
    std::string output = input;
    for(int i = 0; i < input.length(); i++) {
        int digit = (output[i] - '0') * (output[i] - '0');
        output.replace(i, 1, to_string(digit));
    }
    return output;
}