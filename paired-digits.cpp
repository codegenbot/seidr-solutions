```cpp
int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; ) {
        if ((int)s[i] == (int)s[i + 1]) {
            sum += (int)s[i] - '0' * 2;
            i++; 
        } else {
            sum += (int)s[i] - '0';
            i++;
        }
    }
    return sum;
}