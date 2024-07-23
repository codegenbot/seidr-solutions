int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> counts(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            counts[code[i] - 'A']++;
            counts[guess[i] - 'A']--;
        }
    }
    
    for (int count : counts) {
        if (count > 0) {
            whitePegs += count;
        }
    }
    
    whitePegs = max(whitePegs, 0);
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}