int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            ++black;
        } else if (std::count(guess.begin(), guess.end(), code.substr(i, 1)) > 0) {
            ++white;
        }
    }

    return black + white;