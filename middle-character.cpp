Here is the solution:

string middleCharacter(string s) {
    int len = s.length();
    string result;

    if (len % 2 != 0) {
        result = s.substr(len / 2, 1);
    } else {
        result = s.substr(len / 2 - 1, 2);
    }

    return result;
}