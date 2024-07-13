#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;
    for (int i = 0; i < 4; ++i) {
        int c_count = 0, g_count = 0;
        for (char c : "ABCDEFGHIJKLMNOPQRSTUVWXYZ") {
            if (c == code[i]) c_count++;
            if (c == guess[i]) g_count++;
        }
        if (code[i] == guess[i]) {
            black++;
        } else if (c_count > 0 && g_count > 0) {
            white += std::min(c_count, g_count);
        }
    }
    return black + white;
}

int main() {
    std::string code = "XXXX";  
    std::string guess = "XXXX";  
    int result = mastermind(code, guess);
    std::cout << result << std::endl;
    return 0;
}