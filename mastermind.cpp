int codeFreq[26] = {0};
int guessFreq[26] = {0};
for (int i = 0; i < 4; ++i) {
    ++codeFreq[code[i] - 'A'];
    ++guessFreq[guess[i] - 'A'];
}