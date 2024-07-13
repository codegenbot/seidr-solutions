int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else {
            bool found = false;
            for(int j=0; j<4; j++) {
                if(code[j] == guess[i] && !found) {
                    found = true;
                }
                else if(code[j] == guess[i] && found) {
                    white++;
                }
            }
        }
    }

    return black + white;
}