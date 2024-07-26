string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        char sq_str[3];
        sprintf(sq_str, "%d", squared);
        result += sq_str;
    }
    return result;
}