#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else if(count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    // Count the number of correct colors in correct places (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    return {white, black};
}

int main() {
    string code;
    cin >> code;

    string guess;
    cin >> guess;

    pair<int, int> result = mastermind(code, guess);

    cout << result.second << endl;
    cout << result.first << endl;

    return 0;
}