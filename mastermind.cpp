int main() {
    string code, guess;
    cin >> code >> guess;
    int black_pegs = 0, white_pegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
            code[i] = guess[i] = ' ';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j] && code[i] != ' ') {
                ++white_pegs;
                code[i] = guess[j] = ' ';
            }
        }
    }
    
    cout << white_pegs << endl;
    cout << black_pegs << endl;
    
    return 0;
}