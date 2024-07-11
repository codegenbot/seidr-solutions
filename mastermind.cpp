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
            freq[guess[i] - 'A']--;
        }
    }
    
    for (int f : freq) {
        if (f > 0) whitePegs += f;
    }
    
    cout << whitePegs << "\n" << blackPegs << endl;
    
    return 0;
}