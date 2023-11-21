std::string middleCharacter(const std::string& str) {
    int length = str.length();
    int middle = length / 2 - 1;

    if (length % 2 == 0) {
        return str.substr(middle, 2);
    } else {
        return str.substr(middle + 1, 1);
    }
}