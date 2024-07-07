Here is the corrected code:

```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess); // Declare the function

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess (4 characters): ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Number of white pegs: 0\nNumber of black pegs: " << result << endl;
    return 0;

}

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