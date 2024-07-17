int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            bool present = false;
            for(int j = 0; j < 4; j++) {
                if(guess[j] == code[i]) {
                    present = true;
                    break;
                }
            }
            if(!present) white++;
        }
    }

    return {black, white};
}