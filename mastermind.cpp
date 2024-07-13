#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (code[i] == c && code[i] != guess[i]) {
                white++;
                count++;
            }
        }
        if (count > 1) {
            black += count - 1;
        }
    }

    return white + black;
}