int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i] == s[i+1]) {
            sum += s[i] - '0' * 2;
        }
    }
    return sum;
}