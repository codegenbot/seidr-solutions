#include <vector>
#include <iostream>
#include <string>

int MastermindCode(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        char c = code[i];
        if(guess[i] == c) {
            blackPegs++;
        }
    }

    for(int i=0; i<6; i++) {
        char c = code[i%4];
        if(c != guess[0]) {
            int j;
            for(j=1; j<4; j++) {
                if(guess[j] == c) {
                    whitePegs++;
                    break;
                }
            }
        }
    }

    return blackPegs + whitePegs;
}