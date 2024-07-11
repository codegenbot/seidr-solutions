int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (auto const& [key, value] : codeFreq) {
        if (guessFreq.count(key) > 0) {
            whitePegs += min(value, guessFreq[key]);
        }
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
}