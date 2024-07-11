int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0;
    int whitePegs = 0;
    unordered_map<char, int> codeFreq;
    unordered_map<char, int> guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (auto &c : codeFreq) {
        whitePegs += min(c.second, guessFreq[c.first]);
    }
    
    cout << whitePegs << " " << blackPegs << endl;
    
    return 0;
}