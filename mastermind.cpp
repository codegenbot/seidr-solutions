int numWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int numBlackPegs(string code, string guess) {
    int blackPegs = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    
    for (int i = 0; i < 6; ++i) {
        if (codeCount['A' + i] > 0 && guessCount['A' + i] > codeCount['A' + i]) {
            blackPegs++;
        }
    }
    
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}