int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for (auto it = codeCount.begin(); it != codeCount.end(); ++it) {
        if (guessCount.find(it->first) != guessCount.end() && guessCount[it->first] == it->second) {
            count++;
        }
    }
    return 4 - count;
}