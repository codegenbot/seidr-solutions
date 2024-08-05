#include <string>
#include <vector>

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
        for (int j = 0; j < 4; j++) {
            if (guess[j] == 'A' + i) {
                count++;
            }
        }
        white += std::min(count, code.count('A' + i)) - black;
    }

    return make_tuple(white, black);
}