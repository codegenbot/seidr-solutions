Here is the solution:

int squareDigits(int n) {
    string s = to_string(n);
    for (char &c : s) {
        c -= '0';
        c *= c;
        c += '0';
    }
    return stoi(s);
}