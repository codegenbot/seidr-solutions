int pairedDigits(string s) {
    int res = 0;
    for(int i=1; i<s.length(); i++) {
        if(s[i-1] == s[i]) {
            res += s[i] - '0';
        }
    }
    return res;
}