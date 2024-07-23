int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    vector<int> freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = guess[i] = '.';
        } else {
            freq[code[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] != '.') {
            if (freq[guess[i] - 'A'] > 0) {
                ++white;
                freq[guess[i] - 'A']--;
            }
        }
    }

    cout << white << endl << black << endl;

    return 0;
}