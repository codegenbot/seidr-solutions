for (int i = 0; i < 4; ++i) {
    if (code[i] == guess[i]) {
        black++;
    } else {
        codeFreq[code[i] - 'A']++;
        guessFreq[guess[i] - 'A']++;
    }
}

for (int i = 0; i < 6; ++i) {
    white += min(codeFreq[i], guessFreq[i]);
}

white -= black;  // Update calculation of white pegs

cout << white << endl << black << endl;