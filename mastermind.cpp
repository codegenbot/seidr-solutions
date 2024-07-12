int main() {
    string code, guess;
    cin >> code >> guess;

    int white = 0, black = 0;
    vector<int> code_count(6, 0);
    vector<int> guess_count(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_count[code[i] - 'A']++;
            guess_count[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += min(code_count[i], guess_count[i]);
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}