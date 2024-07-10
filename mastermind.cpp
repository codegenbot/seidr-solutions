#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == (char)(i+65) && code.find((char)(i+65)) != std::string::npos) {
                count++;
            }
        }
        white += std::min(count, black);
    }

    return black;
}

int main() {
    std::string code = "XXXX";
    std::string guess = "XXXX";
    int result = mastermind(code, guess);
    return 0;
}