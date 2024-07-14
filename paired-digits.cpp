```c++
#include <cstring>
#include <iostream>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ((i+1) < strlen(s) && (s[i] - '0' == s[i+1] - '0')) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    const char* s = "input_string"; // replace with user input or a hardcoded string
    int result = pairedDigits(s);
    std::cout << "Result: " << result << std::endl;
    return 0;
}