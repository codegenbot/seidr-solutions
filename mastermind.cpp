int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> freq_code(6, 0), freq_guess(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freq_code[code[i] - 'A'];
            ++freq_guess[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(freq_code[i], freq_guess[i]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}