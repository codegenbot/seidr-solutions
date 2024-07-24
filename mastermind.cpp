for (int i = 0; i < 4; ++i) {
    if (matchedIndices.count(i) == 0) {
        for (int j = 0; j < 4 && whitePegs < 4 - blackPegs; ++j) {
            if (matchedIndices.count(j) == 0 && codeFreqCode[code[j] - 'A'] > 0 && codeFreqGuess[guess[j] - 'A'] > 0 && code[j] == guess[i]) {
                ++whitePegs;
                --codeFreqCode[code[j] - 'A'];
                --codeFreqGuess[guess[j] - 'A'];
                break;
            }
        }
    }
}