for (int i = 0; i < 6; ++i) {
    white += min(codeFreq[i], guessFreq[i]);
}

black = count_if(code.begin(), code.end(), guess.begin(), [codeFreq, guessFreq](char c, char g) {
    return c != g && codeFreq[c - 'A'] && guessFreq[g - 'A'];
}) - white;

cout << white << endl << black << endl;