int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount, guessCount;

    for(int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for(int i = 0; i < 6; i++) {
        if(codeCount.count(i+'A') && codeCount[i+'A'] > 0 && guessCount[i+'A'] > codeCount[i+'A']) {
            white += (codeCount[i+'A'] - guessCount[i+'A']);
        }
    }

    return make_pair(white, black).second;
}