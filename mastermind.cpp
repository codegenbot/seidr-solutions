int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            code[i] = guess[i] = ' '; // mark as visited
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != ' ') {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i]) {
                    ++whitePegs;
                    code[j] = ' '; // mark as visited
                    break;
                }
            }
        }
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}