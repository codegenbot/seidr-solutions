std::string middleCharacter(std::string input) {
    if (input.empty()) {
        return "";
    }
    int len = input.length();
    if (len % 2 == 1) {
        return input.substr((len - 1) / 2, 1);
    } else {
        return input.substr((len - 1) / 2, 2);
    }
}