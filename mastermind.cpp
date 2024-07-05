int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeCount(6, 0), guessCount(6, 0);
    string colors = "ROYGBW"; // Assume these are the 6 possible characters
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[colors.find(code[i])]++;
            guessCount[colors.find(guess[i])]++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    
    return 0;
}