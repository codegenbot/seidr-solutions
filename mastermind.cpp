#include <vector>
#include <iostream>
#include <string>

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

    return {black, white};
}

int main() {
    string code;
    string guess;

    cin >> code >> guess;

    int result[2];
    result = mastermind(code, guess);

    cout << result[1] << endl;
    cout << result[0] << endl;

    return 0;
}