string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 != 0) {
        return string(1, s[len/2-1]);
    } else {
        return string(1, s[len/2-1]) + string(1, s[len/2]);
    }
}