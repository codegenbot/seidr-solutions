#include <vector>
#include <iostream>
using namespace std;

int solveMastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }
    
    for(char c : guess) {
        bool found = false;
        for(int i=0; i<4; i++) {
            if(c == code[i] && !found) {
                white++;
                found = true;
            }
        }
    }
    
    return black, white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int result[] = solveMastermind(code, guess);
    cout << result[1] << endl;
    cout << result[0] << endl;
    return 0;
}