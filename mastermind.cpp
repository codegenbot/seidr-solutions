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

    for (char c : guessArray) {
        if (find(codeArray.begin(), codeArray.end(), c) != codeArray.end()) {
            count++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), c), codeArray.end());
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << white << endl;
    cout << black << endl;

    return 0;
}