int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count total correct matches
    std::map<char,int> codeCount;
    codeCount['A'] = 0;
    codeCount['B'] = 0;
    codeCount['C'] = 0;
    codeCount['D'] = 0;
    for (char c : code) {
        codeCount[c]++;
    }
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (code.find(c) != std::string::npos && codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        }
    }

    return black + white;
}