int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    map<char, int> codeMap, guessMap;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    
    for (auto& p : codeMap) {
        white += min(p.second, guessMap[p.first]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}