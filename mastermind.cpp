int numWhitePegs(string code, string guess) {
    int white = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0 && find(code.begin(), code.end(), c) != code.end()) {
            white++;
        }
    }
    return white;
}

int numBlackPegs(string code, string guess) {
    int black = 0;
    for (char c : guess) {
        if (count(code.begin(), code.end(), c) > 0 && find(guess.begin(), guess.end(), c) != guess.end()) {
            black++;
        }
    }
    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}