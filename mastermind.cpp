int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i]];
            ++guessFreq[guess[i]];
        }
    }
    
    for (auto& entry : codeFreq) {
        char color = entry.first;
        white += min(codeFreq[color], guessFreq[color]);
    }

    cout << white << "\n" << black << endl;
    
    return 0;
}