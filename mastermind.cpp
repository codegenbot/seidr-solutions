```cpp
#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i] && j != i) {
                    found = true;
                    break;
                }
            }
            if (!found) whitePegs++;
        }
    }

    return (blackPegs << 2) | whitePegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << mastermind(code, guess) << std::endl;
    return 0;
}