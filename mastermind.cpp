```cpp
int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == code[i]) {
                count++;
            }
        }
        white += count - ((c == code[guess.find(c)]) ? 1 : 0);
    }

    return black + white;
}