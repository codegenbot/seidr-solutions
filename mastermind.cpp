int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }
    
    for (auto& it : codeCount) {
        whitePegs += min(it.second, guessCount[it.first]);
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}