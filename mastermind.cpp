int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    map<char, int> freq_code, freq_guess;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freq_code[code[i]];
            ++freq_guess[guess[i]];
        }
    }
    
    for (auto &entry : freq_code) {
        white += min(entry.second, freq_guess[entry.first]);
    }
    
    cout << white << "\n" << black << endl;

    return 0;
}