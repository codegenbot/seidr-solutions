string squareDigits(string num) {
    string res = "";
    for (char c : num) {
        int n = c - '0';
        res += to_string(n * n);
    }
    return res;
}