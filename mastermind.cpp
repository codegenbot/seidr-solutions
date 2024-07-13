int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i]];
            ++guessFreq[guess[i]];
        }
    }
    
    for (char c = 'A'; c <= 'F'; ++c) {
        white += min(codeFreq[c], guessFreq[c]);
    }
    
    cout << white << "\n" << black << endl;
    
    return 0;
}