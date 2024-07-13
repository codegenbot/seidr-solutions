int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++){
        if(code[i] == guess[i]){
            black++;
        }
    }

    vector<char> codeCopy(code.begin(), code.end());
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(code[j] == guess[i] && code[j] != codeCopy[i]){
                white++;
                codeCopy[i] = '-';
            }
        }
    }

    return black + white;
}