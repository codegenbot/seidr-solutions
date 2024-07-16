int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    unordered_map<char, int> codeFreq, guessFreq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto &it : codeFreq) {
        if (guessFreq.find(it.first) != guessFreq.end()) {
            whitePegs += min(it.second, guessFreq[it.first]);
        }
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}