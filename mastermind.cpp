int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong positions
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = 'x';
            guess[i] = 'x';
        }
    }
    
    // Count the number of correct colors in correct positions
    for(int i = 0; i < 4; i++) {
        int j = 0;
        while(j < 4) {
            if(code[j] == guess[i]) {
                white++;
                code[j] = 'x';
                break;
            }
            j++;
        }
    }
    
    return black, white;
}