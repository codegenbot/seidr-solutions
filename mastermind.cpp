#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    for (char c : guess) {
        if (c == code[0] || c == code[1] || c == code[2] || c == code[3]) {
            if (code.find(c) != string::npos) {
                black++;
            } else {
                white++;
            }
        }
    }

    return white + black;
}