int whitePegs(string code, string guess) {
    int common = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            common++;
        }
    }
    return 4 - common;
}

int blackPegs(string code, string guess) {
    map<char, int> codeMap;
    map<char, int> guessMap;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    
    int black = 0;
    for (auto& pair : codeMap) {
        if (pair.second == 1 && guessMap[pair.first] == 1) {
            black++;
        }
    }
    return black;
}