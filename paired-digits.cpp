int pairedDigits(const char* str) {
    int sum = 0;
    if (*str == '\0') {
        return sum; 
    }
    for (int i = 0; ; i++) {
        if (str[i] == '\0') break;
        if (i < strlen(str) - 1 && str[i] == str[i + 1]) {
            sum += (str[i] - '0');
        }
    }
    return sum;