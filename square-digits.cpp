string squareDigits(string n) {
    string result = "";
    for (char c : n) {
        int digit = c - '0';
        int squared = digit * digit;
        result += to_string(squared);
    }
    return result;
}