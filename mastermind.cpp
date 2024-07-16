int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::set<char> code_chars(code.begin(), code.end());

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j] && i != j) {
                white++;
            }
        }
    }

    return black + white;
}