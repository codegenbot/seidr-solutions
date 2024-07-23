int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> freqCode(6, 0);
    vector<int> freqGuess(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freqCode[code[i] - 'A'];
            ++freqGuess[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(freqCode[i], freqGuess[i]);
    }
    
    cout << white << "\n" << black << "\n";
    
    return 0;
}