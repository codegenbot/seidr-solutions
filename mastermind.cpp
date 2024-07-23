#include <iostream>
#include <map>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i]];
            ++guessFreq[guess[i]];
        }
    }
    
    for (auto& pair : codeFreq) {
        white += std::min(pair.second, guessFreq[pair.first]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}