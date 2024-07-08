#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i='A'; i<=('A'+5); i++) {
        int countCode = 0, countGuess = 0;
        for(int j=0; j<4; j++) {
            if(code[j] == i) {
                countCode++;
            }
            if(guess[j] == i) {
                countGuess++;
            }
        }
        white += min(countCode, countGuess);
    }

    return black + white - black;
}