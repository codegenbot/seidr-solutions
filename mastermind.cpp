#include <vector>
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
    vector<char> codeVector(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (codeVector[i] == guess[i]) {
            codeVector[i] = '#';
            count++;
        }
    }
    for (char c : codeVector) {
        if (c != '#') {
            return 0;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}