int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { 
            black++;
        } else {
            auto iter = guess.find(code[i]);
            if(iter != std::string::npos) {
                white++;
                guess[iter] = '#'; // mark the matched character as used
            }
        }
    }

    return {black, white};
}