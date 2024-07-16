#include <vector>
#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i=0; i<6 && black<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == '0' + i) {
                count++;
            }
        }
        if(count > 1) {
            white += (count - 1);
        } else if(count == 1) {
            black += count;
        }
    }

    return black;
}