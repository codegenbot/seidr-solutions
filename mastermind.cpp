int numWhitePegs(const string &code, const string &guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++whitePegs;
        }
    }
    return whitePegs;
}

int numBlackPegs(const string &code, const string &guess) {
    int blackPegs = 0;
    map<char, int> codeMap;
    for (char c : code) {
        codeMap[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            --codeMap[guess[i]];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (codeMap[guess[i]] > 0) {
            ++blackPegs;
        }
    }

    return blackPegs;
}

void printClue(int whitePegs, int blackPegs) {
    cout << whitePegs << "\n";
    cout << blackPegs << "\n";
}