int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_map;
    for(int i=0; i<4; i++) {
        code_map[code[i]]++;
    }

    for(int i=0; i<4; i++) {
        if(code_map.find(guess[i]) != code_map.end() && code[guess[i]-'A'] != guess[i]) {
            white++;
            code_map[guess[i]]--;
        }
    }

    return black + white;
}