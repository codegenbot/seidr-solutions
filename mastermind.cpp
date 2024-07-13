#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(std::begin(guess), std::end(guess), code[i]) > 0) {
            white++;
        }
    }

    return black + white;
}