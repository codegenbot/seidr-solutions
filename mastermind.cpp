#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; ++i) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark this position as used
            guess[i] = ' ';
        }
    }

    for(int i=0; i<4; ++i) {
        int j = 0;
        while(j < 4) {
            if(guess[j] == code[i]) {
                white++;
                code[i] = ' '; // mark this position as used
                guess[j] = ' ';
                break;
            }
            j++;
        }
    }

    return black, white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int whitePegs, blackPegs;
    tie(whitePegs, blackPegs) = mastermind(code, guess);
    cout << blackPegs << endl;
    cout << whitePegs << endl;
    return 0;
}