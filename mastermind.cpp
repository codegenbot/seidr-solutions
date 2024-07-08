#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in the right position
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors not in the right position
    int codeCount[6] = {0};
    for(int i=0; i<4; i++) {
        codeCount[code[i]-'A']++;
    }
    for(int i=0; i<4; i++) {
        if(codeCount[guess[i]-'A']>0) {
            white++;
            codeCount[guess[i]-'A']--;
        }
    }

    return black;
}