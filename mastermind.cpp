```c++
#include <iostream>
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int correctPosition = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                if (i == j) {
                    correctPosition++;
                }
            }
        }
    }
    return 4 - whitePegs(code, guess);
}

int main() {
    string code;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;

    string guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    int black = blackPegs(code, guess);
    int white = 4 - blackPegs(code, guess);

    std::cout << black << std::endl;
    std::cout << white << std::endl;

    return 0;
}