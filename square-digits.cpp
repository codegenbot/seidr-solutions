```c++
std::string squareDigits(std::string input) {
    std::string result = input;
    for(int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        std::string squared = std::to_string(digit * digit);
        result.replace(i, 1, squared);
    }
    return result;
}