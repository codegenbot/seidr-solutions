int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            ++black;
        } else {
            bool found = false;
            for (char c : guess) {
                if (c == code[i]) {
                    found = true;
                    break;
                }
            }
            if (found) {
                ++white;
            }
        }
    }

    return black + white;