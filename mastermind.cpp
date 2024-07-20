int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    vector<char> codeVec(code.begin(), code.end());
    vector<char> guessVec(guess.begin(), guess.end());

    for (int i = 0; i < 4; ++i) {
        if (codeVec[i] == guessVec[i]) {
            ++black;
        } else if (count(guessVec.begin(), guessVec.end(), codeVec[i]) > 0) {
            ++white;
        }
    }

    return black + white;