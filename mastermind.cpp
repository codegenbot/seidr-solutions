int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    int code_counts[6] = {0};
    int guess_counts[6] = {0};
    for (char c : code) {
        code_counts[c - 'A']++;
    }
    for (char g : guess) {
        guess_counts[g - 'A']++;
    }

    for (int i = 0; i < 6; ++i) {
        int count = std::min(code_counts[i], guess_counts[i]);
        white += count;
    }

    return black + white;
}