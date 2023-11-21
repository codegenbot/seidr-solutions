pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessCount[guess[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return make_pair(blackPegs, whitePegs);
}