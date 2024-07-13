int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != ' ') {
            for (int j = 0; j < 4; ++j) {
                if (code[i] == guess[j]) {
                    white++;
                    code[i] = ' ';
                    guess[j] = ' ';
                    break;
                }
            }
        }
    }
    
    cout << white << "\n" << black << "\n";
    
    return 0;
}