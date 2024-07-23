int getMastermindClue(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    for (int i = 0; i < 4; i++) {
        codeCount[code[i] - 'A']++;
        guessCount[guess[i] - 'A']++;
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return {blackPegs, whitePegs};
}