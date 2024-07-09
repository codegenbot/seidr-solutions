std::string middleCharacter(std::string s) {
    int n = s.length();
    return n % 2 == 1 ? s.substr(n / 2, 1) : s.substr((n - 1) / 2, 2);
}