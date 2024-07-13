int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    set<char> codeSet(code.begin(), code.end());
    set<char> guessSet(guess.begin(), guess.end());

    for(auto c : guess) {
        if(codeSet.find(c) != codeSet.end()) {
            white++;
            codeSet.erase(c);
        }
    }

    return black + white;
}