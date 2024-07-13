int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    vector<int> freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = guess[i] = ' ';
        } else {
            ++freq[code[i] - 'A'];
            ++freq[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == ' ') continue;
        if (freq[code[i] - 'A'] > 0) {
            ++white;
            --freq[code[i] - 'A'];
        }
    }

    cout << white << endl << black << endl;

    return 0;
}