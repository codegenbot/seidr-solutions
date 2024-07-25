int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }
    
    for (auto& p : codeCount) {
        whitePegs += min(p.second, guessCount[p.first]);
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}