#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<6; i++) {
        int count = 0;
        int codeCount = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == (char)(i+'A')) {
                count++;
            }
            if(code[j] == (char)(i+'A')) {
                codeCount++;
            }
        }
        if(count > 0 && codeCount > 0) {
            white += min(count, codeCount);
        }
    }

    return black;
}