std::string squareDigits(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        int squaredDigit = digit * digit;
        result += to_string(squaredDigit);
    }
    return result;
}