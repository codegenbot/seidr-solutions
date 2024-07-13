int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<char> codeSet(6);
    vector<int> codeCount(6, 0);

    for (char c : code) {
        codeSet[c - 'A'] = c;
        codeCount[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) continue;

        char c = guess[i];
        if (codeSet[c] && codeCount[c - 'A'] > 1) white++;
    }

    return black + white;
}