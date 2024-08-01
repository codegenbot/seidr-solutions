#include <string>
using namespace std;

pair<int, int> mastermindCode(const string& code, const string& guess) {
    pair<int, int> result = make_pair(0, 0);
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            // correct place
            result.second++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (i != j && code[j] == guess[i]) {
                    // correct color, wrong place
                    result.first++;
                    break;
                }
            }
        }
    }
    
    return result;
}