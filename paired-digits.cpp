```cpp
int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            sum += static_cast<int>(s[i]) - '0';
        }
    }
    return sum;