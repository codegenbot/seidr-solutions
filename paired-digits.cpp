```c++
int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == s[i]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}