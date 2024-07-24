int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    map<char, int> code_count;
    map<char, int> guess_count;

    for (char c : code) {
        code_count[c]++;
    }
    for (char c : guess) {
        guess_count[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (guess_count[code[i]] > 0) {
            guess_count[code[i]]--;
            white++;
        }
    }

    return black * 4 + white;
}