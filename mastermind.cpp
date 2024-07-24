int main() {
    string code, guess;
    cin >> code >> guess;

    int white_pegs = 0, black_pegs = 0;
    map<char, int> code_count, guess_count;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_count[code[i]]++;
            guess_count[guess[i]]++;
        }
    }

    for (auto &p : guess_count) {
        white_pegs += min(p.second, code_count[p.first]);
    }

    cout << white_pegs << endl;
    cout << black_pegs << endl;

    return 0;
}