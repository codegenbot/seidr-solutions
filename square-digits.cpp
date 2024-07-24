Here is the solution:

int squareDigits(int n) {
    string str = to_string(n);
    for (char &c : str) {
        c -= '0';
        int digit = c - '0';
        c = (char)(digit * digit + '0');
    }
    return stoi(str);
}