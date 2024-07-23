#include <iostream>
#include <string>
#include <utility>

using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        bool found = false;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == code[i] && i != j) {
                found = true;
                break;
            }
        }
        if(!found) {
            white++;
        }
    }
    
    return make_pair(black, white);
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