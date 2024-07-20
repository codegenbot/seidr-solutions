int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            ++black;
        } else {
            auto it = find(guess.begin(), guess.end(), code.substr(i, 1));
            if (it != guess.end()) {
                ++white;
            }
        }
    }

    return black + white - 2;
}