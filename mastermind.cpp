#include <vector>
#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == code[i]) {
                found = true;
                break;
            }
        }
        if (!found) count++;
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) count++;
    }
    return count;
}

void solution() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
}

int main() {
    solution();
    return 0;
}