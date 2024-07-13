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

    // Calculate white pegs
    for(char c : guess) {
        auto it = code.begin();
        while(it != code.end()) {
            if(*it++ == c) {
                break;
            }
        }
        if(it == code.end()) {
            white++;
        }
    }

    return black + white;
}