int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeCount[code[i]];
            ++guessCount[guess[i]];
        }
    }
    
    for (auto& p : codeCount) {
        white += min(p.second, guessCount[p.first]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}