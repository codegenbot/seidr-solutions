int main() {
    string code, guess;
    cin >> code >> guess;
    int black_pegs = 0, white_pegs = 0;
    
    // Calculate black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }
    
    // Calculate white pegs
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] != ' ' && guess[j] != ' ' && code[i] == guess[j]) {
                ++white_pegs;
                code[i] = ' ';
                guess[j] = ' ';
                break;
            }
        }
    }
    
    cout << white_pegs << "\n" << black_pegs;
    
    return 0;
}