string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 0) {
        return (str.length() % 2 == 0) ? string(1, str[str.length()/2 - 1]) + string(1, str[str.length()/2]) : string(1, str[str.length()/2]);
    } else {
        return (str.length() % 2 == 0) ? string(1, str[str.length()/2 - 1]) + string(1, str[str.length()/2]) : string(1, str[str.length()/2]);
    }
}