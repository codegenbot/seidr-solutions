#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the wrong places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'X';
            guess[i] = 'X';
        }
    }

    // Count the number of correct colors in the right places
    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                white++;
                code[j] = 'X';
                break;
            }
            j++;
        }
    }

    return black;
}