#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeArray[i] = '0';
        }
    }
    for (int i = 0; i < 4; i++) {
        int pegCount = 0;
        if (pegCount = count(codeArray.begin(), codeArray.end(), guess[i])) > 0) {
            count++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), guess[i]), codeArray.end());
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << 4 - whitePegs(code, guess) << endl;
    return 0;