```cpp
#include <string>

int main() {
    std::string str = "input_your_string_here";
    int result = pairedDigits(str);
    return 0;
}

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}