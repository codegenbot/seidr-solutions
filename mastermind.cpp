int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; ++i) {
        if (codeArray[i] == guessArray[i]) {
            ++black;
        } else if (count(guessArray.begin(), guessArray.end(), codeArray[i]) > 0) {
            ++white;
        }
    }

    return black + white - 2;
}