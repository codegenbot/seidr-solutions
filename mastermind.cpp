int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white_pegs = 0, black_pegs = 0;
    vector<int> codes(6, 0), guesses(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            codes[code[i] - 'A']++;
            guesses[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white_pegs += min(codes[i], guesses[i]);
    }
    
    cout << white_pegs << endl << black_pegs << endl;
    
    return 0;
}