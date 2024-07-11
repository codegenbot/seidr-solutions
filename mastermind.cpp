int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        char c1 = code[i];
        char c2 = guess[i];

        if(c1 == c2)
            black++;
        else if(code.find(c2) != string::npos) 
            white++;
    }

    return black + (4 - black);
}