int main() {
    string code, guess;
    cin >> code >> guess;
    int white = 0, black = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = guess[i] = ' ';
        }
    }
    
    map<char, int> code_freq, guess_freq;
    for (char c : code) {
        if (c != ' ') {
            code_freq[c]++;
        }
    }
    for (char c : guess) {
        if (c != ' ') {
            guess_freq[c]++;
        }
    }
    
    for (auto& p : code_freq) {
        white += min(p.second, guess_freq[p.first]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}