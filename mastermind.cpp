```c++
#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    int codeCount[6] = {0};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            // Black peg
        } else {
            codeCount[code[i]-'A']++;
            if(codeCount[code[i]-'A'] == 1) count++; // White peg
        }
    }
    
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    
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