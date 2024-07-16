std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2;
    return (len % 2 == 0) ? s.substr(mid - len / 2, 1) : s.substr(mid, 1);
}