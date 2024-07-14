```cpp
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the wrong places
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i]) {
                found = true;
                code[j] = 'X';
                break;
            }
        }
        if (!found) white++;
    }

    // Count the number of correct colors in the right places
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i]) {
                found = true;
                black++;
                code[j] = 'X';
                break;
            }
        }
    }

    return black;
}