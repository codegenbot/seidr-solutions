int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Find correct positions (black)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Find correct colors (white)
    for (char c : code) {
        int index = guess.find(c);
        while(index != std::string::npos) {
            white++;
            index = guess.find(c, index+1);
        }
    }

    // Subtract black pegs from total matches
    white -= black;

    return black + white;
}