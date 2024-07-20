int pairedDigits(string s) {
    int res = 0;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            res += s[i] - '0';
        }
    }
    return res;
}