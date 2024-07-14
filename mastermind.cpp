int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else if (std::find(code.begin(), code.end(), guess[i]) != code.end() && code.find(guess[i]) != i) {
            ++whitePegs;
        }
    }

    return blackPegs * 2 + whitePegs;
}