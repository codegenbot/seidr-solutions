int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; ) {
        if ((s[i] - '0') == (s[i + 1] - '0')) {
            sum += (s[i] - '0') * 2;
            i++; 
        } else {
            sum += s[i] - '0';
            i++;
        }
    }
    return sum;
}