#include <string>
#include <cstddef>

int pairedDigits(const std::string& s) {
    int sum = 0;
    int i = 0; 
    for (i = 0; i < s.size() - 1; ++i) { 
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}