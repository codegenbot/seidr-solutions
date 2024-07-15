#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    sort(code.begin(), code.end());
    sort(guess.begin(), guess.end());
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        } 
        else if(find(code.begin(), code.end(), guess[i]) != code.end()) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    sort(code.begin(), code.end());
    sort(guess.begin(), guess.end());
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}