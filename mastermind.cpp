std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = whitePegs(code, guess);
    int black = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    return std::make_pair(4 - white - black, black);
}