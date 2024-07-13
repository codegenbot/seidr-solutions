```cpp
int mastermind(const std::string& code, const std::string& guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code.substr(i, 1) == guess.substr(i, 1)) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    int code_counts[6] = {false};
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (char c : code) {
            if (c == guess[3-i]) {
                count++;
            }
        }
        white += count - 1;
    }

    return black + white;
}