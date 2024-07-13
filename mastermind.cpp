int whitePegs(string code, string guess) {
    int correct = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            correct++;
        }
    }
    return 4 - correct;
}

int blackPegs(string code, string guess) {
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }
    int black = 0;
    for (int i = 0; i < 6; ++i) {
        if (codeMap.count((char)(i + 'A')) && guessMap[(char)(i + 'A')] == 1) {
            black++;
        }
    }
    return black;