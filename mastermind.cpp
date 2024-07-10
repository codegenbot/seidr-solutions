int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<6; i++) {
        int count = std::count(code.begin(), code.end(), (char)(i+65));
        white += min(count, black);
    }

    return black + (4 - black);
}