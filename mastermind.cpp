#include <string>
using namespace std;

vector<int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    vector<int> result({whitePegs, blackPegs});
    
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
        whitePegs += (count > 1)? 0 : 1;
    }
    
    return result;
}