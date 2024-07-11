#include <vector>
#include <iostream>
#include <string>

int mastermind(const string& code, const string& guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        int count = 0;
        for (char d : code) {
            if (c == d) {
                count++;
                break; // don't need to check more
            }
        }

        if (count > 0) {
            black += count;
            white -= count;
        } else {
            white++;
        }
    }

    return white + black;
}