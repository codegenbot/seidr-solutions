#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

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
    
    return black + white;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    
    string guess;
    cout << "Enter your guess: ";
    cin >> guess;
    
    int pegs = mastermind(code, guess);
    
    cout << "Black pegs: " << pegs - white + black << endl;
    cout << "White pegs: " << white << endl;
    
    return 0;
}