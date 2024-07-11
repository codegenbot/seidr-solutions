int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<bool> codeUsed(4, false), guessUsed(4, false);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            codeUsed[i] = true;
            guessUsed[i] = true;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j] && !codeUsed[i] && !guessUsed[j]) {
                white++;
                codeUsed[i] = true;
                guessUsed[j] = true;
                break;
            }
        }
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}