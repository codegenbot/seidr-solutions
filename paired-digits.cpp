```cpp
int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            sum += (s[i] - '0') + (s[i-1] - '0');
        }
    }
    return sum;

}