#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        bool found = false;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                found = true;
                break;
            }
        }
        if(!found) count++;
        else {
            code.erase(remove(find(code.begin(), code.end(), guess[i]), code.end()), code.end());
            count++;
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