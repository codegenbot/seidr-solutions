#include <iostream>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    if (code == guess) {
        cout << "1" << endl;
        return 0;
    }
    set<int> matchedPositions;
    for (int i = 0; i < 4; i++) {
        if (!matchedPositions.count(i)) {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i]) {
                    blackPegs++;
                    matchedPositions.insert(j);
                    break;
                }
            }
        }
    }
    if (blackPegs == 0) {
        cout << "0" << endl;
        return 0;
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}