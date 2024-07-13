```
int pairedDigits(std::string s) {
    int sum = 0;
    size_t i; 
    for (i = 0; i < s.size() - 1; ++i) { 
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
}