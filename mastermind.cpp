#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    map<char,int> codeCount;
    for(int i=0; i<4; i++) {
        codeCount[code[i]]++;
    }

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black--;
        } else if(codeCount[guess[i]]>0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    return black;
}