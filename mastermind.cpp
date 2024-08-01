#include <vector>
#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        bool correctPosition = false;
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                correctColor = true;
                if (i == j) {
                    correctPosition = true;
                }
            }
        }
        if (!correctPosition && correctColor) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}