#include <string>
using namespace std;

int main() {
    string code = "XXXX"; // Initialize the Mastermind code
    string guess = "XXXX"; // Initialize the guess

    int result = mastermind(code, guess);
    cout << "Number of white pegs: " << result - 4 << endl;
    cout << "Number of black pegs: " << 4 - (result - 4) << endl;

    return 0;
}

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            bool found = false;
            for(int j=0; j<4; j++) {
                if(guess[j] == code[i] && i != j) {
                    found = true;
                    break;
                }
            }
            if(!found)
                white++;
        }
   
    return black + white;
}