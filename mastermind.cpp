int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    map<char, int> freqCode, freqGuess;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            freqCode[code[i]]++;
            freqGuess[guess[i]]++;
        }
    }

    for (auto& it : freqCode) {
        whitePegs += min(it.second, freqGuess[it.first]);
    }

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}