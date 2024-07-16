int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeCount(6, 0);
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            char c = guess[i];
            if (codeCount[c] > 0) {
                whitePegs++;
                codeCount[c]--;
            }
        }
    }

    return whitePegs;
}

int main() {
    int blackPegs = countBlackPegs(cin >> string(code), cin >> string(guess));
    cout << countWhitePegs(code, guess) << endl;
    cout << blackPegs << endl;
    return 0;