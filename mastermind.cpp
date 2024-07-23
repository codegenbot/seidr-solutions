using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : unique(code.begin(), code.end())) {
        int count = 0;
        for (char d : guess) {
            if (c == d && c != guess[guess.find(c)]) {
                white++;
                break;
            }
            else if (c == d) {
                count++;
            }
        }
        if (count < 1) {
            black++;
        }
    }

    return black + white;
}