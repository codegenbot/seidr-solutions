int main() {
    string code, guess;
    cin >> code >> guess;

    int white = 0, black = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeCount[code[i] - 'A'];
            ++guessCount[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 26; ++i) {
        white += min(codeCount[i], guessCount[i]);
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}