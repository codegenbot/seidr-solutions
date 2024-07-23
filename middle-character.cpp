std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2-1, 1) + s.substr(len/2, 1);
    } else {
        return s.substr(len/2, 1);
    }
}