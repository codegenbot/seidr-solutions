#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d && ++count > 1) break;
            if (c == d) white++;
        }
    }

    return black - white;
}

int main() { return mastermind("XXXX", "XXXX"); }