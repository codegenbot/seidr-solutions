int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        int correctIndex = -1; 

        for (int j = 0; j < 4; ++j++) {
            if (code[j] == guess[i]) {
                foundInCode = true;
                if (j == i) { 
                    correctIndex = j;
                    break;
                }
            }
        }

        if (!foundInCode) continue; 

        if (correctIndex != -1) {
            black++; 
        } else {
            white++; 
        }
    }

    return white;
}