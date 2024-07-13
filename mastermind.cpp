#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            int count = 0;
            for (int j = 0; j < 4; j++) {
                if (guess[i] == code[j]) {
                    count++;
                }
            }
            if (count > 0) {
                white += count - 1;
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