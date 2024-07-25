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
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            codeArray[i] = ' ';
            guessArray[i] = ' ';
        }
    }

    for (char c : codeArray) {
        if (c != ' ') {
            count++;
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePeg = whitePegs(code, guess);
    int blackPeg = blackPegs(code, guess);

    cout << whitePeg << endl;
    cout << blackPeg << endl;

    return 0;
}