```
std::pair<int, int> mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    return std::make_pair(black, white);
}