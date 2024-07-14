int mastermind(const char* code, const string guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        bool foundInCode = false;
        int correctIndex = -1; // Initialize to -1

        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                foundInCode = true;
                if (i == guess.find(c)) { // Correct position
                    correctIndex = i;
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