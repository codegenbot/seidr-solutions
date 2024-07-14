#include <iostream>

int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        bool foundInCode = false;
        int correctIndex = -1; 

        for (int j = 0; j < 4; ) {
            if (code[j] == guess[i]) {
                foundInCode = true;
                correctIndex = j;
                break;
            }
            j++;
        }

        if (!foundInCode) continue; 

        if (correctIndex != -1) {
            black++; 
        } else {
            white++; 
        }
    }

    return black + white;
}

int main() {
    const char* code = "XXXX";
    const char* guess = "XXXX";
    int result = mastermind(code, guess);
    int black = 0;
    std::cout << "Number of white pegs: " << (result - black) << ", Number of black pegs: " << black << std::endl;
    return 0;
}