```cpp
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (c == guess[j] && !found) {
                found = true;
            } else if (c == guess[j]) {
                white++;
                break;
            }
        }
    }

    return black;
}