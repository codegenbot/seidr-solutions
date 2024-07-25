int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;

    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for (int i = 0; i < 6; i++) {
        if (codeCount.count((char)(i + 'A')) && codeCount[(char)(i + 'A')] == guessCount[(char)(i + 'A')]) {
            count++;
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;

    return 0;
}