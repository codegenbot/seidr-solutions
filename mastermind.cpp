int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black_pegs = 0, white_pegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
            code[i] = '*';
            guess[i] = '*';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != '*' && guess.find(code[i]) != string::npos) {
            white_pegs++;
            guess[guess.find(code[i])] = '*';
        }
    }
    
    cout << white_pegs << endl << black_pegs << endl;
    
    return 0;
}