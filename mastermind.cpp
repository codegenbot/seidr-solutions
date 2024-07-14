int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> code_chars(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --code_chars.size();
            --black;
        }
    }
    for (char c : code_chars) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                ++count;
            }
        }
        black -= count;
    }
    return {black, white};
}