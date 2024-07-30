Here is the solution:

int squareDigits(int n) {
    string str = to_string(n);
    for (char &c : str) {
        int digit = c - '0';
        c = '0' + sqrt(digit) * sqrt(digit);
    }
    return stoi(str);
}