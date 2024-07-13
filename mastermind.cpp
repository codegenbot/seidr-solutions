int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = '-';
            guess[i] = '-';
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] != '-' && code.find(guess[i]) != string::npos) {
            whitePegs++;
            code[code.find(guess[i])] = '-';
            guess[i] = '-';
        }
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}