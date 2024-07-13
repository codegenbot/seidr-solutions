#include <vector>
#include <iostream>
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
    
    return black + white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}