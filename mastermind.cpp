#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int whitePegsCount = whitePegs(code, guess);
    int blackPegsCount = 0;
    for(int i=0; i<4; i++) {
        bool correctColorWrongPosition = false;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i] && i != j) {
                correctColorWrongPosition = true;
                break;
            }
        }
        if(!correctColorWrongPosition) {
            blackPegsCount++;
        }
    }
    return blackPegsCount - whitePegsCount;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}