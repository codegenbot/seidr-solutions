string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        if (!isdigit(c)) { 
            continue; 
        } else {
            result += to_string(digit * digit);
        }
    }
    return result;
}