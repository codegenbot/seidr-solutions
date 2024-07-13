#include <string>
using namespace std;

vector<int> mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }

    vector<int> result({white, black});
    return result;
}