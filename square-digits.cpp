string squareDigits(string input) {
    string result;
    for (char c : input) {
        result += to_string((c - '0') * (c - '0'));
    }
    return result;