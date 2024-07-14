```cpp
int pairedDigits(const std::string& s) {
    int currentDigit = -1; 
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' + currentDigit || s[i] == '1' + currentDigit || s[i] == '2' + currentDigit || s[i] == '3' + currentDigit || s[i] == '4' + currentDigit || s[i] == '5' + currentDigit || s[i] == '6' + currentDigit || s[i] == '7' + currentDigit || s[i] == '8' + currentDigit || s[i] == '9' + currentDigit) { 
            sum += (currentDigit * 10) + (s[i] - '0');
        } else {
            currentDigit = s[i] - '0';
        }
    }
    return sum;
}