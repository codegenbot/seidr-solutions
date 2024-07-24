#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs (correct color and position)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark as visited
            guess[i] = ' '; // mark as visited
        }
    }

    // Count white pegs (correct color, wrong position)
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i] && code[j] != ' ') {
                whitePegs++;
                code[j] = ' '; // mark as visited
                break;
            }
        }
    }

    return blackPegs, whitePegs;
}