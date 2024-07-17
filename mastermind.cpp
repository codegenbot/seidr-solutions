using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    for (char c : guess) {
        if (count(code.begin(), code.end(), c) > 0 && find(guess.begin(), guess.end(), c) != string::npos) {
            black++;
        } else if (count(code.begin(), code.end(), c) > 0) {
            white++;
        }
    }

    return black;
}