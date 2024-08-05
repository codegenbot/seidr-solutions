#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(code[i] == guess[j] && code[i] != guess[i]){
                whitePegs++;
                break;
            }
        }
    }
    
    // Count the number of correct colors in correct places (black pegs)
    for(int i=0; i<4; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(code[i] == guess[i]){
                blackPegs++;
                break;
            }
        }
    }
    
    return blackPegs + whitePegs;
}