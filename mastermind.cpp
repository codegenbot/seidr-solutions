#include <vector>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                white++;
            }
        }
    }

    return {black, white};
}