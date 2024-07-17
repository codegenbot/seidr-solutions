int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        for (char g : guess) {
            if (c == g) {
                if (&c == &g) {
                    black++;
                    break;
                } else {
                    white++;
                }
            }
        }
    }

    return black + white;
}