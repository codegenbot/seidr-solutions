int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    map<char, int> code_count, guess_count;
    for (int i = 0; i < 4; ++i) {
        ++code_count[code[i]];
        ++guess_count[guess[i]];
    }

    for (char c : "ABCDEF") {
        if (code_count[c] > 0 && guess_count[c] > code_count[c]) {
            ++white;
        }
    }

    return white + black;
}