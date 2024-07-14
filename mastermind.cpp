```cpp
#include <algorithm>
#include <string>

#pragma GCC diagnostic ignored "-Werror"

int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else if (code.find(guess[i]) != std::string::npos && code.find(guess[i]) != i) {
            ++whitePegs;
        }
    }

    return blackPegs * 2 + whitePegs;
}

int main() {
    std::string code = "abcD";
    std::string guess = "aBcd";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << std::endl;
}