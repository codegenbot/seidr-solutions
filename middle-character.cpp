std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result = s.substr(n / 2, 1);
    } else {
        result = std::string(1, s.substr(n / 2 - (n % 2 == 0), 1));
    }
    return result;
}