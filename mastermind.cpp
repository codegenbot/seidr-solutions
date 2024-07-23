// Calculate number of white and black pegs based on the frequency arrays
int whitePegs = 0, blackPegs = 0;
for (int i = 0; i < 26; ++i) {
    whitePegs += min(codeFreq[i], guessFreq[i]);
}
for (int i = 0; i < 4; ++i) {
    if (code[i] == guess[i]) {
        ++blackPegs;
        --whitePegs;
    }
}
// Return the result
cout << whitePegs << " " << blackPegs << endl;