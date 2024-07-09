```cpp
#include <string>

std::string squareDigits(std::string input) {
    std::string output = input;
    for (int i = 0; i < output.length(); i++) {
        int digit = output[i] - '0';
        output[i] = std::to_string(digit * digit).at(0);
    }
    return output;
}

int main() { return 0; }