`pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        int index = guess[i] - 'A';
        if (codeCount[index] > 0 && guess[i] != code[i]) {
            whitePegs++;
            codeCount[index]--;
        }
    }

    return make_pair(blackPegs, whitePegs);
}`