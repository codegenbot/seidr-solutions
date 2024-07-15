std::string middleCharacter(std::string str) {
    int length = str.length();
    if (length % 2 == 0) {
        return std::string(1, str.length() / 2 - 1) + str.substr(length / 2);
    } else {
        return std::string(1, str[length / 2]);
    }
}