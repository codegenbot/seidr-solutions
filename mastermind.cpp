#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    pair<int, int> result = {0, 0};
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++result.second;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            ++result.first;
        }
    }
    return result;
}