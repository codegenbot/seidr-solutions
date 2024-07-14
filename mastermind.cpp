int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (char c : {guess[0], guess[1], guess[2], guess[3]}) {
        bool foundInCode = false;
        int correctIndex = -1; 

        for (int j = 0; j < 4; ) {
            if (code[j] == c) {
                foundInCode = true;
                correctIndex = j;
                break;
            }
            j++;
        }

        if (!foundInCode) continue; 

        if (correctIndex != -1 && correctIndex == (c-'a')) { 
            black++; 
        } else {
            white++; 
        }
    }

    return black + white;

}