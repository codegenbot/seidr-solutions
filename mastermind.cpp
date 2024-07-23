using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : unique(cbegin(code), cend(code))) {
        int count = 0;
        for (char d : guess) {
            if (c == d && count++ < 1) {
                white++;
            }
        }
    }

    return black + white;
}