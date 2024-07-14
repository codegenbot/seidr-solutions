#include <string>

int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        int correctIndex = -1; // Initialize to -1

        for (int j = 0; j < 4; ++j++) {
            if (code[j] == guess[i]) {
                foundInCode = true;
                if (j == i) { // Correct position
                    correctIndex = j;
                    break;
                }
            }
        }

        if (!foundInCode) continue; // Not in the code, so skip this character

        if (correctIndex != -1) {
            black++; // Correct color and position, increment black count
        } else {
            white++; // Correct color but wrong position, increment white count
        }
    }

    return white;
}