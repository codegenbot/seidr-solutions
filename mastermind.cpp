#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for(int i=0; i<4; i++) {
        if(code_chars[i] == guess_chars[i]) {
            black++;
        } else {
            int count = 0;
            for(int j=0; j<4; j++) {
                if(code_chars[i] == guess_chars[j])
                    count++;
            }
            if(count > 0)
                white += count - 1;
        }
    }

    return black + white;
}