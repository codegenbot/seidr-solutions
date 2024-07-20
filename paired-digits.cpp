#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    while (s[0] == '0' && s.length() > 1) s.erase(0, 1);
    for (int i = 0; i < s.length() - 1; i++) {
        if ((str[i] == str[i+1])) {
            sum += (str[i] - '0');
        }
    }
    return sum;
}