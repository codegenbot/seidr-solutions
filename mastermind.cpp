int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (int i = 0; i < 6; i++) { // Changed the limit to 6 as each character can be one of 6 possible characters.
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (code_chars[j] == guess[i]) {
                count++;
            }
        }
        if (count > 1) { // Changed condition to check for correct color but wrong place
            white += count - 1;
        }
    }

    return black + white;
}