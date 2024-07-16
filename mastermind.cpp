int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> codeFreq(26), guessFreq(26);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++codeFreq[code[i] - 'A'];
            ++guessFreq[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}