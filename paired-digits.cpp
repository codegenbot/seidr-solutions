int pairedDigitsSum(const string& str) {
    int sum = 0;
    for (size_t i = 0; i < str.size() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}