```cpp
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count correct positions (black)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    // Count wrong positions (white)
    for(char c : code) {
        int count = std::count(guess.begin(), guess.end(), c);
        white += count - 1;
    }

    return black + white;
}