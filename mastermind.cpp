int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    map<char, int> codeMap, guessMap;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }

    for (auto& elem : codeMap) {
        whitePegs += min(elem.second, guessMap[elem.first]);
    }

    cout << whitePegs << endl;
    cout << blackPegs << endl;

    return 0;
}