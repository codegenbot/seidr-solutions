int main() {
    string code, guess;
    cin >> code >> guess;

    int white = 0, black = 0;
    vector<int> count_code(6, 0);
    vector<int> count_guess(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++count_code[code[i] - 'A'];
            ++count_guess[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += min(count_code[i], count_guess[i]);
    }

    cout << white << endl << black << endl;

    return 0;
}