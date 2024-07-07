int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    vector<char> codeCount(6, 0);
    vector<char> guessCount(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return blackPegs;
}