int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places (white pegs)
    map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            if (--code_count[guess[i]] >= 0) {
                white++;
            }
        }
    }

    // Count correct colors in correct places (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black;
}