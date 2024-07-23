```cpp
#include <string>
#include <set>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::set<char> correctColors;
    for (char c : code) {
        correctColors.insert(c);
    }

    // Count white pegs now
    for (int i = 0; i < 4; ++i) {
        if (correctColors.count(guess[i])) {
            white++;
        }
    }

    return black + white;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int result = mastermind(code, guess);
    std::cout << "Number of white pegs: " << result << std::endl;
    return 0;
}