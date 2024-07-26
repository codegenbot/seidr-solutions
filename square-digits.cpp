string squareDigits(string n) {
    string res = "";
    for (char c : n) {
        int d = c - '0';
        res += to_string(d * d);
    }
    return res;
}