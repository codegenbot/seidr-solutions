int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white_pegs = 0, black_pegs = 0;
    vector<int> count(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
        } else {
            ++count[code[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && count[guess[i] - 'A'] > 0) {
            ++white_pegs;
            --count[guess[i] - 'A'];
        }
    }
    
    cout << white_pegs << endl << black_pegs << endl;
    
    return 0;
}