#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs (correct color, correct place)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as used
            guess[i] = ' '; // mark as used
        }
    }

    // Count white pegs (correct color, wrong place)
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i]) {
                count++;
                code[j] = ' '; // mark as used
            }
        }
        white += (count > 0) ? 1 : 0;
    }

    return black + white;
}