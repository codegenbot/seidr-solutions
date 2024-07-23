```cpp
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count white pegs now
    for (char c : code) {
        int index = guess.find(c);
        while(index != std::string::npos) {
            white++;
            index = guess.find(c, index+1);
        }
    }

    return black;
}

int main() {
    std::string code = "XXXX";
    std::string guess = "XXXX";

    int result = mastermind(code, guess);

    return 0;
}