int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> freq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freq[code[i]];
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && freq[guess[i]] > 0) {
            ++white;
            --freq[guess[i]];
        }
    }
    
    cout << white << "\n" << black;
    
    return 0;
}