#include <string>
using namespace std;

pair<int, int> mastermindCodeMaster(string code, string guess) {
    pair<int, int> result = make_pair(0, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            // correct color and position
            result.second++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            // correct color, wrong position
            result.first++;
        }
    }

    return result;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;
    pair<int, int> res = mastermindCodeMaster(code, guess);
    cout << "White pegs: " << res.first << endl;
    cout << "Black pegs: " << res.second << endl;
    return 0;
}