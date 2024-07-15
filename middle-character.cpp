std::string middleCharacter(std::string str) {
    int length = str.length();
    if (length % 2 == 0) {
        return std::string(1, str.substr(length / 2 - 1, 2).at(0)) + str.substr(length / 2 - 1, 2).at(1);
    } else {
        return std::string(1, str.at(length / 2));
    }
}