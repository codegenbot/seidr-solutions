int pairedDigits(const std::string& s) {
    int num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    int sum = 0;
    for (int i = 0; i < to_string(num).length() - 1; i++) {
        if ((to_string(num)[i] - '0') == (to_string(num)[i + 1] - '0')) {
            sum += (to_string(num)[i] - '0') * 2;
        }
    }
    return sum;
}