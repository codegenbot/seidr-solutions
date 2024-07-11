int mastermind(string code, string guess) {
    int white = 0, black = 0;
    for(int i=0; i<4; i++){
        if(code[i] == guess[i]){
            black++;
        } else{
            bool found = false;
            for(int j=0; j<4; j++){
                if(guess[j] == code[i] && !found){
                    white++;
                    found = true;
                }
            }
        }
    }
    return black + white - 2;
}