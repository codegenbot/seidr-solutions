int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        int foundInCode = 0;
        int correctIndex = -1; // Initialize to -1

        for (char c : {guess[i], guess[i + 1], guess[i + 2], guess[i + 3]}) {
            if (code[i] == c) {
                foundInCode++;
                if (i == int(c) - '0') { // Correct position
                    correctIndex = i;
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