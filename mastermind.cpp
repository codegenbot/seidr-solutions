int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<4; i++) {
        bool isPresentInCode = false;
        for(int j=0; j<4; j++) {
            if(guess[i] == code[j]) {
                isPresentInCode = true;
                break;
            }
        }
        if(isPresentInCode) white++;
    }

    return black + white;
}