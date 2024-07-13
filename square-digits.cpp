std::string squareDigits(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}