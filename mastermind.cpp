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
        if (count(guess.begin(), guess.end(), c) > 1) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    // Read the input from user
    string code, guess;
    cin >> code >> guess;

    // Count white and black pegs
    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);

    // Print the output
    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}