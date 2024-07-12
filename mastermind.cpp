int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i])
            ++black;
    }

    map<char, int> code_freq, guess_freq;
    for (int i = 0; i < 4; ++i) {
        code_freq[code[i]]++;
        guess_freq[guess[i]]++;
    }

    for (auto &p : guess_freq) {
        white += min(p.second, code_freq[p.first]);
    }

    white -= black;

    cout << white << endl;
    cout << black << endl;

    return 0;
}