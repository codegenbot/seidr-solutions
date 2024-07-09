std::string middleCharacter(std::string s) {
    int n = s.length();
    if (n % 2 == 1) {
        return s[(n - 1) / 2];
    } else {
        return s[n / 2 - 1] + s[n / 2];
    }
}