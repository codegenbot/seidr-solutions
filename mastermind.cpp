#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0, j=0; i<4 && j<4; i++, j++) {
        if(code[i] == guess[j]) {
            continue; // Correct position, counted in black pegs
        } 
        else if(code.find(guess[j]) != string::npos) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0, j=0; i<4 && j<4; i++, j++) {
        if(code[i] == guess[j]) {
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