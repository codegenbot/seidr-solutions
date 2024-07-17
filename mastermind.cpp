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

    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                count++;
            }
        }
        if (count > 1) {
            white += count - black;
        }
    }

    return white + black;

}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int result = mastermind(code, guess);
    std::cout << result << '\n';
    return 0;
}