int whitePegs(const string& code, const string& guess) {
    int white = 0;
    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 &&
            std::find(code.begin(), code.end(), c) != code.end()) {
            white++;
        }
    }
    return white;
}

int blackPegs(const string& code, const string& guess) {
    int black = 0;
    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 &&
            std::find(code.begin(), code.end(), c) == code.find(c)) {
            black++;
        }
    }
    return black;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << endl;
    cout << black << endl;
    return 0;
}