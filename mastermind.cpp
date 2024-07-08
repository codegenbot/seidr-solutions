int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    vector<int> codeCount(6, 0);
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            blackPegs++;
        } else {
            codeCount[c - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if (codeCount[i] > 0) {
            whitePegs++;
            codeCount[i] = 0;
        }
    }
    
    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}