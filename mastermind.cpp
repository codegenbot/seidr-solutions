int mastermind(const string& code, const string& guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    bool code_counts[6] = {false};
    int correct_colors = 0;
    for (char c : code) {
        code_counts[c - 'A'] = true;
        if (c == guess[3-c]) continue; 
        correct_colors++;
    }

    white = correct_colors;

    return black + white;
}