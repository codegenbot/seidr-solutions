#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[j] == code[i] && j != i) {
                    found = true;
                    break;
                }
            }
            if (!found) white++;
        }
    }

    return black + white - black;
}

int main() {
    std::string code, guess;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter a guess: ";
    std::cin >> guess;

    int result = mastermind(code, guess);
    std::cout << result << '\n';
    return 0;
}