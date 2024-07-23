int mastermindCode(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    map<char, int> codeCount, guessCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (codeCount[guess[i]] > 0) {
                whitePegs++;
                codeCount[guess[i]]--;
            }
        }
    }

    return {blackPegs, whitePegs};
}