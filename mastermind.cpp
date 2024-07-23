int main() {
    string code, guess;
    cin >> code >> guess;

    int white_pegs = 0, black_pegs = 0;
    vector<int> code_count(26, 0);
    vector<int> guess_count(26, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        white_pegs += min(code_count[i], guess_count[i]);
    }

    cout << white_pegs << "\n" << black_pegs << endl;

    return 0;
}