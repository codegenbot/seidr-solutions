int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            int count = 0;
            for (char d : code) {
                if (d == guess[i] && d != code[count % 4]) {
                    white++;
                    break;
                }
                count++;
            }
        }
    }

    return black + white;
}