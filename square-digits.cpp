Here is the solution:

int squareDigits(int n) {
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0';
        str.replace(i, 1, to_string(digit * digit));
    }
    return stoi(str);
}