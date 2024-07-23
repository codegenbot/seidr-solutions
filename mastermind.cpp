int main() {
    string code, guess;
    cin >> code >> guess;
    int white = 0, black = 0;
    map<char, int> codeMap, guessMap;
  
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
  
    for (auto& it : codeMap) {
        white += min(it.second, guessMap[it.first]);
    }
    
    cout << white << endl;
    cout << black << endl;

    return 0;
}