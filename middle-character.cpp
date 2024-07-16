std::string middleCharacter(const std::string& str) {
    int length = str.length();
    return str.substr(length / 2, (length % 2 == 0) ? 2 : 1);
}