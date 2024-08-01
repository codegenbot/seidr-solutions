string middleCharacter(string s) {
    int len = s.length();
    string result;

    if(len % 2 == 0) {
        int midIndex = len / 2;
        result = s.substr(midIndex-1, 2);
    } else {
        int midIndex = len / 2;
        result = s.substr(midIndex, 1);
    }

    return result;
}