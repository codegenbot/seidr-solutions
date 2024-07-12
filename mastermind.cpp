int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black_pegs = 0, white_pegs = 0;
    vector<int> code_freq(6, 0), guess_freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_freq[code[i] - 'A']++;
            guess_freq[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white_pegs += min(code_freq[i], guess_freq[i]);
    }
    
    cout << white_pegs << "\n" << black_pegs;
    
    return 0;
}