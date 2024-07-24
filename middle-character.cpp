std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return std::string(1, s.substr(length / 2 - 1, 1)[0]) + s.substr(length / 2 - 1, 1);
    } else {
        return std::string(1, s.substr(length / 2, 1)[0]);
    }
}