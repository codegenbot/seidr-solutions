int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white_pegs = 0, black_pegs = 0;
    vector<int> freq1(6, 0), freq2(6, 0);
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            freq1[code[i] - 'A']++;
            freq2[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        white_pegs += min(freq1[i], freq2[i]);
    }
    
    cout << white_pegs << "\n" << black_pegs;
    
    return 0;
}