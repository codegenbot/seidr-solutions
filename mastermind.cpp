int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (guess.find(c) != string::npos) {
            blackPegs++;
            guess.erase(guess.find(c), 1);
        }
    }
    return blackPegs;
}

int main() {
    // Get the input from user
    string code, guess;
    cin >> code >> guess;

    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}