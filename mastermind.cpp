int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (guess[j] == c && c != guess[i]) {
                ++white;
                found = true;
                break;
            }
        }
    }

    return black << 1 | white;
}