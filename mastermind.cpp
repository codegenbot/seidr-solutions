```
#include <algorithm>
using namespace std;

int mastermind(const string& code, const string& guess) {
    map<char, int> countGuess;
    for (char c : guess) {
        ++countGuess[c];
    }

    int white = 0;
    int black = 0;

    for (char c : code) {
        if (c == guess[guess.find(c)]) {
            ++black;
        } else if (countGuess[c] > 0) {
            ++white;
            --countGuess[c];
        }
    }

    return black + white - 2;
}