```c++
#include <string>

int main() {
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

        return black;
    }

    int main_result = mastermind("abcD", "abca");
    std::cout << "Black pegs: " << main_result << ", White pegs: " << (4 - main_result) << std::endl;

    return 0;
}