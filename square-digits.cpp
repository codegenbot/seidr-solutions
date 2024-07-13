string squareDigits(std::string num) {
    string result = "";
    for (char c : num) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}