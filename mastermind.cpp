int main() {
    string secret, guess;
    cin >> secret >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    vector<int> seen(4, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (secret[i] == guess[i]) {
            ++blackPegs;
            seen[i] = 1;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (seen[i] == 0) {
            for (int j = 0; j < 4; ++j) {
                if (secret[i] == guess[j] && secret[j] != guess[j]) {
                    ++whitePegs;
                    guess[j] = ' ';
                    break;
                }
            }
        }
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}