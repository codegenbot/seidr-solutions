```c++
#include <unordered_map>

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
        int count = std::count(guess.begin(), guess.end(), c);
        if (count > 1) {
            whitePegs += count - 1;
        } else if (count == 1) {
            blackPegs++;
        }
    }
    
    return blackPegs;
}

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