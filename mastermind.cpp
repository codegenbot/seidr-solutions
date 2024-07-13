int main() {
    string code, guess;
    cin >> code >> guess;

    int black_pegs = 0, white_pegs = 0;
    vector<bool> code_used(4, false);
    vector<bool> guess_used(4, false);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
            code_used[i] = true;
            guess_used[i] = true;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (!code_used[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!guess_used[j] && code[i] == guess[j]) {
                    white_pegs++;
                    guess_used[j] = true;
                    break;
                }
            }
        }
    }

    cout << white_pegs << endl << black_pegs << endl;

    return 0;
}