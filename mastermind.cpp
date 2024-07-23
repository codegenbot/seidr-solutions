#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in the wrong place
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark this position as visited
            guess[i] = ' '; // mark this position as visited
        }
    }
    
    // Count the number of correct colors in the right place
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white++;
            code[i] = ' '; // mark this position as visited
            guess[i] = ' '; // mark this position as visited
        }
    }
    
    return black, white;
}

int main() {
    string code;
    cin >> code;
    string guess;
    cin >> guess;
    int black, white;
    tie(black, white) = mastermind(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}