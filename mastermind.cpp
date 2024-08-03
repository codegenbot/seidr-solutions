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
        int count = std::count(code.begin(), code.end(), c);
        white += count > 0 && c != code[0] && c != code[1] && c != code[2] && c != code[3];
    }

    return black + white;
}