#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            whitePegs++;
        }
    }
    
    return make_pair(whitePegs, blackPegs).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}