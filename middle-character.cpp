std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2;
    std::string result;
    if (len % 2 == 0) {
        result = s.substr(mid - 1, 1) + s.substr(mid, 1);
    } else {
        result = s.substr(mid, 1);
    }
    return result;