std::string squareDigits(int n) {
    std::string str = to_string(n);
    std::string result;
    for (char c : str) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}