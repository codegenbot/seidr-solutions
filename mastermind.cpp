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
        for (int i = 0; i < 4; ++i) {
            if (c == code[i]) {
                count++;
            }
        }
        white += count - 1;
    }

    return black + white;
}

int main() {
    std::string code, guess;
    // Read input from user
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter a guess: ";
    std::cin >> guess;

    int result = mastermind(code, guess);
    std::cout << result - 4 << "\n" << result << std::endl;
    return 0;
}