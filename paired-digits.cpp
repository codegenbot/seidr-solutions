int pairedDigits(std::string s) {
    int sum = 0;
    int i = 0; 
    for (; i < s.length(); i++) {
        if ((s[i] - '0') == (i+1 < s.length() ? (s[i+1] - '0') : -1)) {
            sum += (s[i] - '0');
        }
        if(i+1<s.length()) i++;
    }
    return sum;
}