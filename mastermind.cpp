int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> cntCode(26), cntGuess(26);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            cntCode[code[i] - 'A']++;
            cntGuess[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        whitePegs += min(cntCode[i], cntGuess[i]);
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
}