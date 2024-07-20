int mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int blacks = 0;

    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            ++blacks;
        } else if (std::count(guess.begin(), guess.end(), code.substr(i, 1)) > 0) {
            ++white;
        }
    }

    return black + white - 2;
}