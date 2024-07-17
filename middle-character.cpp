std::string middleCharacter(std::string input) {
    if (input.empty()) {
        return "";
    }
    int len = input.length();
    return len == 1 ? "" : (len % 2 == 1 ? input.substr(len / 2, 1) : input.substr((len - 1) / 2, 2));
}