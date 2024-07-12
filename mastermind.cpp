int main() {
    string code, guess;
    cin >> code >> guess;

    int white_pegs = 0, black_pegs = 0;
    map<char, int> code_freq, guess_freq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_freq[code[i]]++;
            guess_freq[guess[i]]++;
        }
    }

    for (auto &[c, freq] : code_freq) {
        white_pegs += min(freq, guess_freq[c]);
    }

    cout << white_pegs << endl;
    cout << black_pegs << endl;

    return 0;
}