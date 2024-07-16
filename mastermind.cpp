int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white_pegs = 0, black_pegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
            code[i] = guess[i] = ' ';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != ' ') {
            for (int j = 0; j < 4; ++j) {
                if (guess[j] != ' ' && code[i] == guess[j]) {
                    ++white_pegs;
                    code[i] = guess[j] = ' ';
                    break;
                }
            }
        }
    }
    
    cout << white_pegs << endl << black_pegs << endl;
    
    return 0;
}