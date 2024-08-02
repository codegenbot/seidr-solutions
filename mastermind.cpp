int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            blackPegs++;
        } else if (codeCount[c] > 0) {
            whitePegs++;
            codeCount[c]--;
        }
    }

    return {blackPegs, whitePegs};
}