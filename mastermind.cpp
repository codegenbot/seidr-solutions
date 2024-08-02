#include <string>

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (c == guess[j] && !found) {
                found = true;
                continue;
            } else if (c == guess[j]) {
                whitePegs++;
                break;
            }
        }
    }

    return blackPegs << 2 | whitePegs; // Convert to binary and then back to decimal
}