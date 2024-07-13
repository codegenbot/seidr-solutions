int pairedDigits(string s) {
    int last = -1;
    int sum = 0;
    for (char c : s) {
        if (c == '0' + last) {
            sum += c - '0';
        }
        last = c;
    }
    return sum;
}