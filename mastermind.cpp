int mastermind(string code, string guess) {
    int white = 0, black = 0;
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; ++i) {
        if (codeArray[i] == guessArray[i]) {
            --guessArray.end(); // Move to the next character
            black++;
        }
    }

    for (char c : guessArray) {
        auto it = std::find(codeArray.begin(), codeArray.end(), c);
        if (it != codeArray.end()) {
            ++it; // Move to the next character
            white++;
        }
    }

    return make_pair(white, black).second;
}