#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j <= s.length(); j++) {
            if (s[i] == s[j % s.length()]) {
                sum += s[i] - '0';
            }
        }
    }
    return sum;
}

int main() {
    char input[] = "1233345556";
    std::string str(input);
    int sum = pairedDigits(str);
    return 0;
}