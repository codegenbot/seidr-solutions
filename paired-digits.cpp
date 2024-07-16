int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') == (i + 1 < s.length() ? (s[i+1] - '0') : 0)) {
            sum += (s[i] - '0');
        }
    }
    return sum;
}