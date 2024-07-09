int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    set<char> code_set(code.begin(), code.end());
    set<char> guess_set(guess.begin(), guess.end());

    for (char c : code_set) {
        if (guess_set.count(c)) {
            white++;
            guess_set.erase(c);
        }
    }

    return make_pair(white, black).second;
}