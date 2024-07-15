#include <iostream>
#include <string>

using namespace std;

void addCharacter(string& str, char c) {
    str.push_back(c);
}

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] != guess[i]) 
            count++;
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i])
            count++;
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