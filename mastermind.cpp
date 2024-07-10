#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == (string)(i+48) && code.find((string)(i+48)) != string::npos) {
                count++;
            }
        }
        if(count > 1) white += count - 1;
    }

    return black + white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
}