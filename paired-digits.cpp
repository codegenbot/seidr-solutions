int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            sum += (s[i - 1] - '0') + (s[i] - '0');
        }
    }
    return sum;
}