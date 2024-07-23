int main() {
    string code, guess;
    cin >> code >> guess;

    int white = 0, black = 0;
    vector<int> count(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '*';
            guess[i] = '#';
        } else {
            count[code[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] != '#' && count[guess[i] - 'A'] > 0) {
            white++;
            count[guess[i] - 'A']--;
        }
    }

    cout << white << "\n" << black << "\n";

    return 0;
}