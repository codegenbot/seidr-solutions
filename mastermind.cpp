#include <vector>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(code[i] == guess[j] && code[i] != guess[i]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i])
            count++;
    }
    return count;
}

int main() {
    // get input from user
    string code;
    cin >> code;
    
    string guess;
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;  // print number of black pegs
    cout << white << endl;   // print number of white pegs

    return 0;
}