#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<4; i++) {
        bool inCode = false;
        for(int j=0; j<4; j++) {
            if(guess[i] == code[j]) {
                inCode = true;
                break;
            }
        }
        if(!inCode) continue;
        white++;
    }

    return black;
}