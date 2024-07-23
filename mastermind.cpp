void mastermind(const std::string& code, const std::string& guess) {
    int codeFreq[6] = {0};
    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (codeFreq[code[i] - 'A'] < 0) {
                ++whitePegs;
            }
            if (codeFreq[guess[i] - 'A'] > 0) {
                ++whitePegs;
            }
            --codeFreq[code[i] - 'A'];
            ++codeFreq[guess[i] - 'A'];
        }
    }

    // Return whitePegs and blackPegs as the result.
}