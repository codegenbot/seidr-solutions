string squareDigits(string n) {
    string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return res;
}