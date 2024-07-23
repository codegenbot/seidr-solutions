int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    // add the following digit also if it's equal to the last digit
    if (s.length() > 0 && s[0] == s[s.length() - 1]) {
        sum += s[0] - '0'; // add the first and last digits if they are same
    }
    return sum;
}