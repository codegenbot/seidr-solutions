int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freq[code[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && freq[guess[i] - 'A'] > 0) {
            ++white;
            --freq[guess[i] - 'A'];
        }
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}