#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        auto it = code.find(c);
        while (it != std::string::npos && black > 0) {
            it = code.find(c, it + 1);
        }
        if (it != std::string::npos) {
            white++;
        }
    }

    return black + white;
}