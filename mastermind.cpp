int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeCount;
    for (char c : code) {
        ++codeCount[c];
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != code[i]) {
            if (codeCount[guess[i]] > 0) {
                ++whitePegs;
                --codeCount[guess[i]];
            }
        }
    }
    
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}