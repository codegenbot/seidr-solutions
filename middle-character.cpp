Here is the C++ solution:

string middleCharacter(string str) {
    int n = str.length();
    if (n % 2 == 1) {
        return string(1, str[n / 2]);
    } else {
        return str.substr(n / 2 - 1, 2);
    }
}