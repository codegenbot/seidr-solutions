```cpp
#include <string>
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (__count__(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    for (char c : guess) {
        if (__count__(code.begin(), code.end(), c) > 0 && code.find(c) == std::string::npos) {
            white++;
        }
    }

    return black + white;
}