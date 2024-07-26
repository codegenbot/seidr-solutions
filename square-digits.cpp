Here is the solution:

string squareDigits(int n) {
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0';
        str[i] = to_string(digit * digit);
    }
    return str;
}