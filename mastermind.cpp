int mastermindCode(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (char c : code) {
        if (code.find(c) != string::npos && guess.find(c) != string::npos && code.find(c) != guess.find(c)) {
            whitePegs++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return make_pair(blackPegs, whitePegs).second;
}