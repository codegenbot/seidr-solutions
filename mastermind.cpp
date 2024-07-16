#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else if(count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }
    
    return make_pair(white, black).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}