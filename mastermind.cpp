int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::set<char> code_chars(code.begin(), code.end());
    int correct_guess_count = 0;
    for (char c : guess) {
        if (code_chars.count(c)) {
            correct_guess_count++;
        }
    }

    white = correct_guess_count - black;
    return black + white;
}