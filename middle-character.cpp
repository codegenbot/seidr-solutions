std::string middleCharacter(std::string s) {
    int n = s.length();
    if (n % 2 == 1) {
        return std::string(1, s[n / 2]);
    } else {
        return s.substr(n / 2 - 1, 2);
    }
}