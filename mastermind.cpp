#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else {
            for(char c : code) {
                if(c == guess[i] && find(guess.begin(), guess.end(), c) != guess.end()) {
                    white++;
                    break;
                }
            }
        }
    }

    return black + white;
}