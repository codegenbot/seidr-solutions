int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '\0'; // mark as used
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && code[j] != '\0') {
                found = true;
                code[j] = '\0'; // mark as used
                break;
            }
        }
        if (!found) white++;
    }

    return black + white;
}

int main() {
    std::string code = "BOBO"; 
    std::string guess = "BOBO";
    int result = mastermind(code, guess);
    return 0;
}