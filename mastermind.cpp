int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    map<char, int> code_freq, guess_freq;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_freq[code[i]]++;
            guess_freq[guess[i]]++;
        }
    }
    for (auto& it : code_freq) {
        white += min(it.second, guess_freq[it.first]);
    }
    cout << white << "\n" << black << "\n";
    return 0;
}