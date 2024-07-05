int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeCount(6, 0), guessCount(6, 0);
    map<char, int> colorMap = {{'R', 0}, {'G', 1}, {'B', 2}, {'Y', 3}, {'O', 4}, {'W', 5}};
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[colorMap[code[i]]]++;
            guessCount[colorMap[guess[i]]]++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}