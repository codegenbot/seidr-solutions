int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                sum += s[i] - '0';
            }
        }
    }
    return sum;
}