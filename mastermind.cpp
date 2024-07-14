int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    map<char, int> codeCount, guessCount;
    for (int i = 0; i < 4; ++i) {
        ++codeCount[code[i]];
        ++guessCount[guess[i]];
    }

    for (int i = 0; i < 4; ++i) {
        if (codeCount[code[i]] > 0 && guessCount[code[i]] > 1) {
            ++white;
            --codeCount[code[i]];
            --guessCount[code[i]];
        }
    }

    return black + white;
}