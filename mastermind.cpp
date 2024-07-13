```cpp
#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    char code_chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else if(std::count(code_chars, code_chars+6, guess[i]) > 0) {
            white++;
        }
    }

    return black;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "ABDC";
    int result = mastermind(code, guess);
    return 0;
}