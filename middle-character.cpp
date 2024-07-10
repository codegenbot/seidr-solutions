string middleCharacter() {
    int length = s.length();
    if (length % 2 == 1)
        return s.substr(length / 2, 1);
    else
        return s.substr((length - 1) / 2, 2);
}