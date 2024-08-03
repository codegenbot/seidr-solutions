#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = 'N'; // mark as used in code
            guess[i] = 'N'; // mark as used in guess
        }
    }
    
    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        for (int j = 0; j < 4; ++j) {
            if (guess[i] == code[j]) {
                foundInCode = true;
                code[j] = 'N'; // mark as used in code
                break;
            }
        }
        if (!foundInCode) white++;
    }
    
    return black, white;
}