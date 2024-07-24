std::string middleCharacter(std string& s) {
    if (s.empty()) return "";

    int len = s.length();
    int mid = len % 2 == 0 ? (len / 2) : (len - 1) / 2;

    return len % 2 == 0 ? s.substr(mid - 1, 2) : std::string(1, s[mid]);
}