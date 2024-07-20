int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        while (s[i] == '0') i++;
        if (i < s.length() - 1 && (s[i] - '0') == (s[i + 1] - '0')) {
            sum += (s[i] - '0');
        }
    }
    return sum;
}