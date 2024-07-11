#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i]];
            ++guessFreq[guess[i]];
        }
    }
    
    for (auto& it : codeFreq) {
        white += min(it.second, guessFreq[it.first]);
    }
    
    std::cout << white << '\n';
    std::cout << black << '\n';
    
    return 0;
}