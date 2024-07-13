int mastermind(std::string code, std::string guess) {
    int black = 0; // Correct color & place
    int white = 0; // Correct color, wrong place

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++; // Correct color & place
        }
    }

    for(int i=0; i<4; i++) {
        bool correct_color = false;
        for(int j=0; j<4; j++) {
            if(guess[i] == code[j] && !correct_color) {
                white++;
                correct_color = true;
            }
        }
    }

    return {black, white};
}