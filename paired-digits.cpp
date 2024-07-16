```cpp
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    std::string input;
    std::getline(cin, input);
    
    int result = pairedDigits(input);
    return 0;
}