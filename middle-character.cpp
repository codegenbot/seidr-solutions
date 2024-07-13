Here is the solution:

string middleCharacter(string str) {
    int length = str.length();
    if (length % 2 == 1)
        return string(1, str[(length - 1) / 2]);
    else
        return str.substr((length - 2) / 2, 2);
}