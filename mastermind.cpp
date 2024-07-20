```
#include <algorithm>
using namespace std;

int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;
    
    map<char, int> charCount;
    for (char c : guess) {
        charCount[c]++;
    }

    for (char c : code) {
        if (c == guess[guess.find(c)]) {
            ++black;
        } else if (charCount[c] > 0) {
            ++white;
        }
    }

    return black + white - 2;
}