#include <string>
using namespace std;

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
    }
    
    return black + white;
}

int main() {
    string code = "XXXX";  // Your Mastermind code here
    string guess = "XXXX";  // Your guess code here
    int result = mastermind(code, guess);
    cout << result;  // Print the result
    return 0;
}