int sumOfPairedDigits(string s) {
    int result = 0;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i] == s[i+1]) {
            result += s[i] - '0';
        }
    }
    return result;
}