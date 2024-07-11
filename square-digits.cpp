std::string squareDigits(std::string input) {
    std::string output;
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
}