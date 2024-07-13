int pairedDigits(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.length(); ) {
        if (i + 1 < s.length() && s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
            i += 2; 
        } else {
            sum += (s[i] - '0');
            i++;
        }
    }
    return sum;
}