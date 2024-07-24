string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (c >= '0' && c <= '9') { 
            int digit = c - '0';
            result += to_string(digit * digit);
        } else {
            result += c;
        }
    }
    return result;
}