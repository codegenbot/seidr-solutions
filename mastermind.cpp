int countBlackPegs(string &code, string &guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int countWhitePegs(string &code, string &guess) {
    int whitePegs = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (codeCount[guess[i]] > 0) {
            --codeCount[guess[i]];
            whitePegs++;
        }
    }
    return whitePegs;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);
    cout << blackPegs << endl;
    cout << whitePegs << endl;
    return 0;
}