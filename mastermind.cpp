int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong places
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 && std::count(code.begin(), code.end(), c) > 1) {
            white++;
        }
    }
    
    // Count the number of correct colors and positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    
    return black, white;
}