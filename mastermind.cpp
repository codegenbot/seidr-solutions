int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    unordered_map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (auto& elem : codeFreq) {
        white += min(elem.second, guessFreq[elem.first]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}