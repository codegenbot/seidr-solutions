#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j] && i != j) {
                    white++;
                    break;
                }
            }
        }
    }

    return {white, black};
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    std::tie(white, black) = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}