int main() {
    string code, guess;
    cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<bool> codeVisited(4, false);
    vector<bool> guessVisited(4, false);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            codeVisited[i] = true;
            guessVisited[i] = true;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (!codeVisited[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!guessVisited[j] && code[i] == guess[j]) {
                    whitePegs++;
                    codeVisited[i] = true;
                    guessVisited[j] = true;
                    break;
                }
            }
        }
    }
    
    cout << whitePegs << "\n" << blackPegs;
    
    return 0;
}