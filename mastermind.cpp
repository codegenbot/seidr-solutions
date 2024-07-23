#include <iostream>
#include <string>
#include <utility>

using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            bool found = false;
            for(int j=0; j<4; j++) {
                if(guess[j] == code[i] && !found) {
                    white++;
                    found = true;
                }
            }
        }
    }
    pair<int, int> result = make_pair(black, 4 - black - white);
    return 0;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
}