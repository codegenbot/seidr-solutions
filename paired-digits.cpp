int pairedDigits(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i + 1 < s.length() && s[i] == s[i + 1]) || (i >= s.length() - 1)) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}