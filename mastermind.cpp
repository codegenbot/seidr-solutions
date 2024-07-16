int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = guess[i] = ' ';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != ' ') {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i]) {
                    ++white;
                    code[j] = guess[i] = ' ';
                    break;
                }
            }
        }
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}