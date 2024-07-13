int main() {
    string secret, guess;
    cin >> secret >> guess;

    int white = 0, black = 0;
    map<char, int> freq1, freq2;

    for (int i = 0; i < 4; ++i) {
        if (secret[i] == guess[i]) {
            ++black;
        } else {
            ++freq1[secret[i]];
            ++freq2[guess[i]];
        }
    }

    for (auto &p : freq1) {
        white += min(p.second, freq2[p.first]);
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}