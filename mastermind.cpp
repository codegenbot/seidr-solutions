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
                if(code[i] == guess[j])
                    codeCount[code[i] - 'A']--;
            }
            white = 0;
            for(int j=0; j<6; j++)
                if(codeCount[j] > 0)
                    white++;
        }
    }
    return black + white;
}