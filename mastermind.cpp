int main() {
    string code, guess;
    cin >> code >> guess;
    int white_pegs = 0, black_pegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
            code[i] = guess[i] = '.'; // Mark matched characters
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] != '.' && code[i] == guess[j]) {
                ++white_pegs;
                code[i] = guess[j] = '.'; // Mark matched characters
            }
        }
    }
    
    cout << white_pegs << endl;
    cout << black_pegs << endl;
    
    return 0;
}