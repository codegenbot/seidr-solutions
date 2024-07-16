int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    int codeFreq[26] = {0};
    int guessFreq[26] = {0};
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i] - 'A']++;
            guessFreq[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        white += min(codeFreq[i], guessFreq[i]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}