int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    vector<int> cnt(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            cnt[code[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && cnt[guess[i] - 'A'] > 0) {
            white++;
            cnt[guess[i] - 'A']--;
        }
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}