```cpp
#include <string>

std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (int i : {str.begin(), str.end()}) {
        int digit = (i - '0') * (i - '0');
        result += std::to_string(digit);
    }
    return result;
}