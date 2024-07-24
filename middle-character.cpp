string middleCharacter(string str) {
    int len = str.length();
    string result;

    if (len % 2 != 0) { // odd length
        result = str.substr(len / 2, 1);
    } else { // even length
        result = str.substr((len / 2) - 1, 2);
    }

    return result;
}