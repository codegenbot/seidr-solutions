Here is the solution:

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 != 0) {
        return string(1, s[length / 2]);
    } else {
        return s.substr(length / 2 - 1, 2);
    }
}