#include <string>
#include <algorithm>
#include <iostream>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    return white;
}

int main() {
    std::string code;
    std::cin >> code;
    std::string guess;
    std::cin >> guess;
    int result = mastermind(code, guess);
    return 0;
}