#include <string>
using namespace std;

pair<int, int> getMastermindPegs(const string& code, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else if(count(guess.begin(), guess.end(), code[i]) > 0) {
            whitePegs++;
        }
    }

    return {whitePegs, blackPegs};
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> pegs = getMastermindPegs(code, guess);

    cout << pegs.second << endl; // print the number of white pegs
    cout << pegs.first << endl;  // print the number of black pegs

    return 0;
}