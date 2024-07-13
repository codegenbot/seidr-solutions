#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else {
            for(char c : code) {
                if(c == guess[i] && std::find(guess.begin(), guess.end(), c) != guess.end()) {
                    white++;
                    break;
                }
            }
        }
    }

    return black + white;
}