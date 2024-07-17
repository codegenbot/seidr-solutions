#include <string>
using namespace std;

pair<int, int> mastermindCode(string code, string guess) {
    pair<int, int> result;
    int whitePegs = 0;
    int blackPegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark as used in the code
            guess[i] = ' '; // mark as used in the guess
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        if (code.find(guess[i]) != string::npos && code[i] != ' ') {
            whitePegs++;
            code[i] = ' '; // mark as used in the code
        }
    }

    result.first = blackPegs;
    result.second = whitePegs;

    return result;
}