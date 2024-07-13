int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] - '0') == (i + 1 < strlen(s) ? (s[i + 1] - '0') : -1)) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}