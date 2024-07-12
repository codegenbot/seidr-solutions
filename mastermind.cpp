int main() {
    string mastermind, guess;
    cin >> mastermind >> guess;

    int white = 0, black = 0;
    vector<int> freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (mastermind[i] == guess[i]) {
            black++;
        } else {
            freq[mastermind[i] - 'A']++;
            freq[guess[i] - 'A']--;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += max(freq[i], 0);
    }

    cout << white << endl << black << endl;

    return 0;
}