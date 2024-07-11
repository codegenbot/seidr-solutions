int whitePegs(string code, string guess) {
    int white = 0;
    unordered_map<char, int> codeFreq, guessFreq;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            white++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    int black = 0;
    for (const auto &p : codeFreq) {
        black += min(p.second, guessFreq[p.first]);
    }
    return white;
}

int blackPegs(string code, string guess) {
    int black = 0;
    unordered_map<char, int> codeFreq, guessFreq;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    int white = 0;
    for (const auto &p : codeFreq) {
        white += min(p.second, guessFreq[p.first]);
    }
    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}