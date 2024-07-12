#include <string>

char input[] = "1233345556";
int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::string str(input); 
    int result = pairedDigits(str);
    return 0;
}