int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> codeCount(6, 0), guessCount(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    cout << whitePegs << "\n" << blackPegs << endl;
    
    return 0;
}