#include <string>
using namespace std;

vector<int> mastermindCode(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        char c = code[i];
        if (c == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == c && j != i) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                blackPegs--;
            }
        }
    }

    vector<int> result({whitePegs, blackPegs});
    return result;
}