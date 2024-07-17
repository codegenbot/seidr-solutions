#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    
    for (char c : guess) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (c == code[i] && !found) {
                found = true;
            } else if (c == code[i]) {
                white++;
            }
        }
    }
    
    return black + white - black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}