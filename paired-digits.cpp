int sum_of_paired_digits(string str) {
    int res = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i+1]) {
            res += str[i] - '0';
        }
    }
    return res;
}