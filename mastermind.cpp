int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        auto it = std::find(guess.begin(), guess.end(), c);
        while (it != guess.end()) {
            white++;
            it = std::find(it+1, guess.end(), c);
        }
    }

    return black + white;
}