Here is the completed code:

string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 != 0) {
        return string(1, str[length / 2]);
    } else {
        return string(2, str[(length - 1) / 2] + str[(length + 1) / 2]);
    }
}