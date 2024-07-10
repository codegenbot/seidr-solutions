```cpp
int mastermind(string code, string guess) {
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
            if(guess[j] == (char)(i+65) && std::count(code.begin(), code.end(), (char)(i+65)) > 0) {
                count++;
            }
        }
        white += min(count, black);
    }

    return black + (4 - black);
}