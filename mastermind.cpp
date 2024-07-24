int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count the number of correct colors at wrong places (white pegs)
    for(int i = 0; i < 4; ++i){
        int count = 0;
        for(int j = 0; j < 4; ++j){
            if(code[i] == guess[j] && code.find(guess[j]) != i) {
                white++;
                break;
            }
        }
    }

    // Count the number of correct colors at right places (black pegs)
    for(int i = 0; i < 4; ++i){
        if(code[i] == guess[i]){
            black++;
        }
    }

    return white, black;
}