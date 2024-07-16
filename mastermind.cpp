int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> codeFreq(6, 0), guessFreq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++codeFreq[code[i] - 'A'];
            ++guessFreq[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
}