string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        if (isdigit(c)) { 
            int digit = c - '0';
            result += to_string(digit * digit);
        } else {
            result += c; 
        }
    }
    return result;
}