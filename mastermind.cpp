#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    int codeCount[6] = {0};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - 'A']++;
            for(int j=0; j<4; j++) {
                if(guess[j] != guess[i] && codeCount[guess[j] - 'A'] > 0) {
                    white++;
                    codeCount[guess[j] - 'A']--;
                }
            }
        }
    }
    return black + white;
}