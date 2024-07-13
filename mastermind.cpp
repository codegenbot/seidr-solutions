int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    map<char,int> code_count, guess_count;

    for(int i=0; i<4; i++) {
        code_count[code[i]]++;
        guess_count[guess[i]]++;
    }

    for(int i=0; i<6; i++) {
        if(code_count['A'+i] > 0 && guess_count['A'+i] > 0) {
            black += min(code_count['A'+i], guess_count['A'+i]);
        }
    }

    white = max(0,4 - black);

    return make_pair(white,black).second;
}