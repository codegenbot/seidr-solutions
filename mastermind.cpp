#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    for(int i=0; i<4; i++) {
        int found = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == code[i] && i != j) {
                found = 1;
                break;
            }
        }
        if(!found) whitePegs++;
    }
    
    return blackPegs + whitePegs - 2;
}