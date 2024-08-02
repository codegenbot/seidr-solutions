#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        char c1 = code[i];
        char c2 = guess[i];
        
        if(c1 == c2) {
            black++;
        } else if(find(guess.begin(), guess.end(), c1) != guess.end()) {
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