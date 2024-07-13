```cpp
#include <iostream>
#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    return black;
}

int main() {
    std::string code = "abcd";
    std::string guess = "abcd"; // or any other valid combination

    int whitePegs = mastermind(code, guess);
    std::cout << "Number of white pegs: " << whitePegs << std::endl;

    return 0;
}