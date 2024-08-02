string squareDigits(string n) {
    string res = "";
    for (char c : n) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return res;
}