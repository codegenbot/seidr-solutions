int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    vector<int> count(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++count[code[i] - 'A'];
            ++count[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += min(count[i], 1);
    }

    white -= black;

    cout << white << endl;
    cout << black << endl;

    return 0;
}