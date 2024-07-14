const char* middleCharacter(const char* s) {
    int len = std::strlen(s);
    int startMid = len / 2;
    int endMid = len / 2 + 1;

    if (len % 2 == 0) { 
        return (s[startMid - 1] + s[endMid - 1]);
    } else { 
        return &s[len / 2];
    }
}