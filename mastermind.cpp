#include <string>
#include <utility>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (guess[j] == 'A' + i && code[j] != guess[j]) {
                count++;
            }
        }
        white += min(count, black - count);
    }

    return std::make_pair(white, black);
}