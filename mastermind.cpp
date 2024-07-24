int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors but wrong places (white pegs)
    for(int i=0; i<4; i++) {
        bool present = false;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                present = true;
                code[j] = '#'; // mark as used
                break;
            }
        }
        if(!present) continue;

        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                white++;
                code[j] = '#'; // mark as used
                break;
            }
        }
    }

    // Count correct colors and places (black pegs)
    for(int i=0; i<4; i++) {
        bool present = false;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                present = true;
                code[j] = '#'; // mark as used
                break;
            }
        }
        if(present) black++;
    }

    return white + black;
}