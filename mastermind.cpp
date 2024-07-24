for (int i = 0; i < 4; ++i) {
    if (code[i] == guess[i]) {
        ++blackPegs;
    } else {
        if (code[i] >= 'A' && code[i] <= 'F' && codeFreqCode[code[i] - 'A'] > 0) ++whitePegs;
        if (guess[i] >= 'A' && guess[i] <= 'F' && codeFreqGuess[guess[i] - 'A'] > 0) ++whitePegs;
        if (code[i] >= 'A' && code[i] <= 'F') ++codeFreqCode[code[i] - 'A'];
        if (guess[i] >= 'A' && guess[i] <= 'F') ++codeFreqGuess[guess[i] - 'A'];
    }
}