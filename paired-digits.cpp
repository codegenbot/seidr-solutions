Here is the modified code:
```cpp
#include <string>
#include <cctype>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (std::to_string(s[i]) == std::to_string(s[i + 1])) {
            sum += s[i] - '0';
        }
    }
    return sum;
}