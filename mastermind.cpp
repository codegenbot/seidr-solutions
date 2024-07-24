int mastermind(string code, string guess) {
    int whitePegs = 0;
    vector<int> codeCount(6, 0), guessCount(6, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]) - (codeCount[i] > 0 && guessCount[i] > 0);
    }

    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}