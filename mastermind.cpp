pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    int diffCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        diffCount[i] = abs(codeCount[i] - guessCount[i]);
        whitePegs += diffCount[i];
    }

    whitePegs -= blackPegs;

    return make_pair(whitePegs, blackPegs);
}