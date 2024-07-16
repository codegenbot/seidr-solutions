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
    std::getline(std::cin, input);
    
    if(input.empty()) {
        std::cerr << "Error: Input string is empty." << std::endl;
        return 1;
    }
    
    int result = pairedDigits(input);
    return 0;
}