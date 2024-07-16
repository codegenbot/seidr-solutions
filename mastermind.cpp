int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

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

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black;
}