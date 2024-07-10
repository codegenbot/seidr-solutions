int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> code_chars(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --black;
            code_chars[i] = ' ';
        }
    }
    for (char c : code_chars) {
        if (c != ' ') {
            int count = 0;
            for (int j = 0; j < 4; ++j) {
                if (code[j] == c && guess[j] != c) {
                    ++count;
                }
            }
            white += count;
        }
    }
    return black + white;
}