std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        if (!isdigit(c)) { 
            result += c;
        } else {
            result += std::to_string(digit * digit);
        }
    }
    return result;
}