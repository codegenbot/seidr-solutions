int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    map<char, int> freqCode, freqGuess;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++freqCode[code[i]];
            ++freqGuess[guess[i]];
        }
    }
    
    for (auto& it : freqCode) {
        whitePegs += min(it.second, freqGuess[it.first]);
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
}