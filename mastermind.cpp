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
    
    for (auto& pair : codeFreq) {
        white += min(pair.second, guessFreq[pair.first]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}