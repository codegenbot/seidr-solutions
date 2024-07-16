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

    return black + white;

}

int main() {
    std::string code;
    std::cout << "Enter the Mastermind code (4 characters): ";
    std::cin >> code;

    std::string guess;
    std::cout << "Enter your guess (4 characters): ";
    std::cin >> guess;

    int result = mastermind(code, guess);

    std::cout << "Number of white pegs: " << result - black << "\n";
    std::cout << "Number of black pegs: " << result << "\n";

    return 0;
}