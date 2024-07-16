```cpp
#include <string>
#include <iostream>

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
    char c;
    input.clear();
    while ((c = getchar()) != '\n' && !input.empty()) {
        input.push_back(c);
    }
    
    int result = pairedDigits(input);
    std::cout << result << std::endl;
    return 0;
}