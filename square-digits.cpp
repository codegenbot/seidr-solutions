string squareDigits(long long n) {
    string s = to_string(n);
    string res;
    for (char c : s) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return res;
}