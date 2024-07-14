```cpp
int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (int j = 0; j < 4; ++j) {
        int count = 0;
        for (int k = 0; k < 4; ++k) {
            if (guess[j] == code[k]) {
                count++;
            }
        }
        if (count > 1) {
            white += count - 1;
        } else if (count == 1) {
            black--;
        }
    }

    return black + white;
}