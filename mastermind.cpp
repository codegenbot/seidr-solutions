int mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
        else if (guess[i] != ' ') { 
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i] && i != j) {
                    found = true;
                    break;
                }
            }
            if (!found) white++;
        }
    }

    return black;
}