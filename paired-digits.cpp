int pairedDigitsSum(const string& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size() - 1; ++i) {
        if (digits[i] == digits[i + 1]) {
            sum += (digits[i] - '0');
        }
    }
    return sum;
}