int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    map<char, int> guessCount;

    for (char c : code) {
        codeCount[c]++;
    }

    for (char c : guess) {
        guessCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            char c = code[i];
            if (guessCount[c] > 0) {
                white++;
                guessCount[c]--;
            }
        }
    }

    return black + white;
}