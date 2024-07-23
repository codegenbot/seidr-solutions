for (int i = 0; i < 4; ++i) {
    if (code[i] != guess[i]) {
        if (code[i] >= 'A' && code[i] <= 'F') {
            ++codeFreq[code[i] - 'A'];
        }
        if (guess[i] >= 'A' && guess[i] <= 'F') {
            ++guessFreq[guess[i] - 'A'];
        }
    } else {
        ++black;
    }
}