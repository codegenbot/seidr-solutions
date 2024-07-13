#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(code.begin(), code.end(), guess[i]) > 0) {
            white++;
        }
    }

    return black + white;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "ABDC";
    int result = mastermind(code, guess);
    return 0;
}