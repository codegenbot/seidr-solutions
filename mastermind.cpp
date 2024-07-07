#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1) {
            whitePegs += count - 1;
        } else if (count == 1) {
            blackPegs--;
        }
    }
    
    return blackPegs;
}

int main() { 
    return mastermind("XXXX", "XXXX");
}