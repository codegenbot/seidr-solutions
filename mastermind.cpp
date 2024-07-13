#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int white = 0, black = 0;
    map<char, int> codeFreq;
    map<char, int> guessFreq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto &p : codeFreq) {
        white += std::min(p.second, guessFreq[p.first]);
    }

    std::cout << white << std::endl;
    std::cout << black << std::endl;

    return 0;
}