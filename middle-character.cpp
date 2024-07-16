std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2 - 1, 2) : s.substr(len/2 - 1, len%2==0 ? 2 : 1);
}