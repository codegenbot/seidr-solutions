Here is the modified code:

```cpp
#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else if (std::count(code.begin(), code.end(), guess[i]) > 0) {
            white++;
        }
    }

    return {white, black};
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    auto [w, b] = mastermind(code, guess);
    std::cout << "White pegs: " << w << ", Black pegs: " << b << std::endl;
    return 0;
}