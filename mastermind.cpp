for (int i = 0; i < 4; ++i) {
    if (code[i] == guess[i]) {
        ++blackPegs;
        codeFreq[code[i] - 'A'] += 1;
        guessFreq[guess[i] - 'A'] += 1;
    }
}

for (int i = 0; i < 4; ++i) {
    if (code[i] != guess[i]) {
        ++codeFreq[code[i] - 'A'];
        ++guessFreq[guess[i] - 'A'];
    }
}

for (int i = 0; i < 26; ++i) {
    whitePegs += min(codeFreq[i], guessFreq[i]);
}

cout << whitePegs << " " << blackPegs << endl;