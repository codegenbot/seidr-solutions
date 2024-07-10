int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code.erase(i, 1);
            guess.erase(i, 1);
        }
    }

    for(char c : guess) {
        int count = 0;
        while(find(code.begin(), code.end(), c) != code.end()) {
            count++;
            code.erase(distance(code.begin(), find(code.begin(), code.end(), c)), 1);
        }
        white += count;
    }

    return black + (4 - black);
}