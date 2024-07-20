int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> count_guess;

    for (char c : guess) {
        ++count_guess[c];
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --black;
        } else if (count_guess[code[i]] > 0) {
            --count_guess[code[i]];
            ++white;
        }
    }

    return black + white;