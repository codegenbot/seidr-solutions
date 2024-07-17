int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (count(code.begin(), code.end(), c) > 0 && guess.find(c) != code.find(c)) {
            ++whitePegs;
        }
    }
    return whitePegs;
}

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (c == code[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countBlackPegs(code, guess) << endl;
    cout << countWhitePegs(code, guess) << endl;
    return 0;
}