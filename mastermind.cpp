```cpp
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
        else {
            auto it = std::find(code.begin(), code.end(), guess[i]);
            if(it != code.end()) {
                white++;
            }
        }
    }

    return {black, white};
}