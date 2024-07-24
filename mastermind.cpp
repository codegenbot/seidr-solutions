int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> code_freq(6, 0), guess_freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++code_freq[code[i] - 'A'];
            ++guess_freq[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(code_freq[i], guess_freq[i]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}