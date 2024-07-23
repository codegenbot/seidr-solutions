```cpp
#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                count++;
            }
        }
        if (count > 1) {
            white++;
        }
    }

    return black + white;
}