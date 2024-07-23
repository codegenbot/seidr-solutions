std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 0, 2);
    } else {
        return s.substr(length / 2, 1);
    }
}