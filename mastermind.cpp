for (int i = 0; i < 4; ++i) {
    if (code[i] != guess[i] && code[i] >= 'A' && code[i] <= 'F') {
        if (guessFreq[code[i] - 'A'] > 0) {
            ++white;
            --guessFreq[code[i] - 'A'];
        }
    }
}