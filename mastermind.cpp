int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }

    for (const auto& it : codeMap) {
        whitePegs += min(it.second, guessMap[it.first]);
    }

    whitePegs -= blackPegs;

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}