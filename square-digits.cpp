Here is the solution:

int squareDigits(int n) {
    string s = to_string(n);
    for (char &c : s) {
        int digit = c - '0';
        c = char((digit * digit) + '0');
    }
    return stoi(s);
}