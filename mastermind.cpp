int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
            count++;
        }
    }
    for (auto it = codeMap.begin(); it != codeMap.end(); ++it) {
        if (codeMap[it->first] > 1 || guessMap[it->first] > 1) {
            return -1;
        }
    }
    int blackPegsCount = blackPegs(code, guess);
    return count - blackPegsCount;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}