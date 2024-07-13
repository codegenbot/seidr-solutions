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

    for (char c : unique_copy(string(guess).begin(), string(guess).end())) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == c && code[j] != guess[j]) {
                white++;
                count++;
            }
        }
    }

    return white + black;
}