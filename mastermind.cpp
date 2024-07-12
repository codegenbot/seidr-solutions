int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            freq[code[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && freq[guess[i] - 'A'] > 0) {
            whitePegs++;
            freq[guess[i] - 'A']--;
        }
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
}