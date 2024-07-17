```cpp
#include <string>
#include <algorithm>

int main() {
    std::string code;  // get the input from user
    std::cout << "Enter the Mastermind code (4 characters): ";
    std::cin >> code;

    std::string guess;  // get the input from user
    std::cout << "Enter your guess (4 characters): ";
    std::cin >> guess;

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && guess.find(std::string(1, c)) != std::string::npos) {
            black++;
        } else if (std::count(code.begin(), code.end(), c) > 0) {
            white++;
        }
    }

    int result = black;
    // To return both black and white pegs, uncomment the line below
    // result = {black, white};
    std::cout << "Black pegs: " << black << ", White pegs: " << white << std::endl;

    return 0;
}