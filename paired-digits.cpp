int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); ) {
        if (i + 1 < strlen(s) && (int)s[i] == (int)s[i + 1]) {
            sum += ((int)s[i] - 48) * 2;
            i += 2; 
        } else {
            sum += (int)s[i] - 48;
            i++;
        }
    }
    return sum;
}