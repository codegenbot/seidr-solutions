int pairedDigits(const std::string& s) {
    int sum = 0;
    size_t i = 0;
    for ( ; i < s.size() - 1; i++) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += (s[i] - '0') * 2;
        } else {
            sum += s[i] - '0';
        }
    }
    return sum;
}