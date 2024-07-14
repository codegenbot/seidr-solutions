#include <iostream>
#include <string>

int mastermind(const char* code, const char* guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i] && j != i) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                whitePegs++;
            }
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    const char* code = "XXXX";
    const char* guess = "XXXX";
    int result = mastermind(code, guess);
    std::cout << "Number of pegs: " << result << std::endl;
    return 0;
}