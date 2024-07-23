string squareDigits(int n) {
    string str = to_string(n);
    for (char c : str) {
        int digit = c - '0';
        str += to_string(digit * digit);
    }
    return str;
}