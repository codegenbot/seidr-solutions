```cpp
int pairedDigits(const std::string& s) {
    int currentDigit = -1; 
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == currentDigit + '0') { 
            sum += (currentDigit * 10) + (s[i] - '0');
        } else {
            currentDigit = s[i] - '0';
        }
    }
    return sum;

}