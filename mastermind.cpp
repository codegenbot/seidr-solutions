```cpp
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count white pegs now
    std::set<char> correctColors;
    for (char c : code) {
        correctColors.insert(c);
    }
    for (int i = 0; i < 4; ++i) {
        if (correctColors.count(guess[i])) {
            white++;
        }
    }

    return black + white;
}