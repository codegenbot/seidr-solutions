int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeFreq, guessFreq;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            continue;
        }
        codeFreq[code[i]]++;
        guessFreq[guess[i]]++;
    }

    for (auto elem : codeFreq) {
        char color = elem.first;
        count += min(codeFreq[color], guessFreq[color]);
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;

    return 0;
}