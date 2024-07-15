std::string squareDigits(const std::string& input) {
    std::string result;
    for (char c : input) {
        int digit = c - '0';
        result += static_cast<char>(digit * digit + '0');
    }
    return result;