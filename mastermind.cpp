#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        char c = code[i];
        if (c == guess[i]) {
            blackPegs++;
        } else {
            int j = 0;
            while (j < 4 && c != guess[j]) {
                ++j;
            }
            if (j < 4) {
                whitePegs++;
            }
        }
    }

    return {whitePegs, blackPegs};
}