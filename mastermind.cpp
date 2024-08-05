#include <string>
#include <tuple>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int i = 0; i < 6; i++) {
        int count = 0;
        int codeCount = 0;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == 'A' + i) {
                count++;
            }
            if (code[j] == 'A' + i) {
                codeCount++;
            }
        }
        white += std::min(count, codeCount) - black;
    }

    return std::make_tuple(white, black);
}