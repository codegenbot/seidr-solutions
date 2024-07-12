int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    
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
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}