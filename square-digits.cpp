Here is the solution:

string squareDigits(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        s[i] = to_string(digit * digit);
    }
    return s;
}