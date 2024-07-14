std::string middleCharacter(std::string s) {
    int len = s.length();
    std::string result = len % 2 == 0 ? s.substr(len / 2 - 1, 2) : s.substr(len / 2, 1);
    return result;
}