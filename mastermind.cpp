int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Create a character array or vector of unique characters in the code.
    char code_chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::vector<char> code_vector(code.begin(), code.end());

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(code_chars, code_chars+6, guess[i]) > 0 || 
               std::find(code_vector.begin(), code_vector.end(), guess[i]) != code_vector.end()) {
            white++;
        }
    }

    return black;
}