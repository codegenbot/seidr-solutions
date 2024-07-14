Here is the completed code:

string middleCharacter(string str) {
    int len = str.length();
    string result;

    if (len % 2 != 0) {
        // Odd length, return single middle character
        result = str.substr(len / 2, 1);
    } else {
        // Even length, return two middle characters
        result = str.substr(len / 2 - 1, 2);
    }

    return result;
}