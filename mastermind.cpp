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

    for (int i = 0; i < 6; i++) {
        int countCode = count(code_chars.begin(), code_chars.end(), code[i]);
        int countGuess = count(guess_chars.begin(), guess_chars.end(), guess[i]);
        
        if (code[i] == guess[i]) {
            black += countCode;
        } else {
            white += min(countCode, countGuess);
        }
    }

    return black + white;
}