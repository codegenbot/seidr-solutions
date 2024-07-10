std::string squareDigits(std::string input) {
    std::string output;
    for (char c : input) {
        int digit = c - '0';
        std::stringstream ss;
        ss << digit * digit;
        output += ss.str();
    }
    return output;