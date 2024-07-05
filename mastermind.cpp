int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreq(6, 0), guessFreq(6, 0);
    string colors = "ROYGBW";

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[colors.find(code[i])]++;
            guessFreq[colors.find(guess[i])]++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }

    cout << whitePegs << endl << blackPegs << endl;
    return 0;
}