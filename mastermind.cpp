#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    string codeChar, guessChar;
    
    // Count correct colors
    for(int i=0; i<4; i++) {
        codeChar = code.substr(i,1);
        guessChar = guess.substr(i,1);
        if(code.find(guessChar) != string::npos && codeChar != guessChar) {
            count++;
        }
    }

    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    
    // Count correct places
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